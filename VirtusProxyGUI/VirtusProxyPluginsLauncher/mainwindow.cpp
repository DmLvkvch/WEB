#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pluginwidgetform.h"
#include "mainwindowsettings.h"
#include "pluginloader.h"
#include "pluginviewcontroller.h"
#include "pluginhandler.h"
#include "pluginiface.h"
#include <QFileDialog>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QStyle>
#include <QGridLayout>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>

MainWindow::MainWindow(PluginViewController controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->_controller = &controller;
    ui->setupUi(this);
    setWindowTitle(tr("Виртус Прокси"));
    _widgetsLayout = new QGridLayout;
    _scroll = new QScrollArea;
    this->ui->_pluginsWidget->setLayout(_widgetsLayout);
    trayIcon = createTray();
    QMenuBar* menu = createMenu();
    setMenuBar(menu);
    _scroll->setWidget(this->ui->_pluginsWidget);
    _scroll->setWidgetResizable(true);
    setCentralWidget(_scroll);
}

QMenuBar* MainWindow::createMenu()
{
    QMenuBar* _mnuBar = nullptr;
    QMenu* _pmnu = nullptr;
    _mnuBar  = new QMenuBar;
    _pmnu = new QMenu();
    _pmnu->setTitle(tr("Меню"));
    _pmnu->setVisible(true);
    _pmnu->addSeparator();
    _pmnu->addAction("&"+tr("Настройки"),this, &MainWindow::handleSettings,Qt::CTRL + Qt::Key_Q);
    _pmnu->addSeparator();
    _pmnu->addAction("&"+tr("Загрузить новый плагин"), this, &MainWindow::handleLoadNewPlugin);
    _mnuBar->addMenu(_pmnu);
    return _mnuBar;
}

QSystemTrayIcon* MainWindow::createTray()
{
    QSystemTrayIcon* tray = new QSystemTrayIcon(this);
    tray->setIcon(this->style()->standardIcon(QStyle::SP_ComputerIcon));
    tray->setToolTip(this->windowTitle());
    QMenu* menu = new QMenu(this);
    QAction* viewWindow = new QAction(tr("Свернуть окно"), this);
    QAction* quitAction = new QAction(tr("Выход"), this);
    QObject::connect(viewWindow, &QAction::triggered, this, &QMainWindow::show);
    QObject::connect(quitAction, &QAction::triggered, this, &QMainWindow::close);
    menu->addAction(viewWindow);
    menu->addAction(quitAction);
    tray->setContextMenu(menu);
    tray->show();
    tray->setVisible(true);
    QObject::connect(tray, &QSystemTrayIcon::activated, this, &MainWindow::handleIconActivated);
    return tray;
}

void MainWindow::closeEvent(QCloseEvent * event)
{
    if(this->isVisible())
    {
        event->ignore();
        this->hide();
        QSystemTrayIcon::MessageIcon icon = QSystemTrayIcon::MessageIcon(QSystemTrayIcon::Information);
        trayIcon->showMessage(this->windowTitle(),
                              tr("Приложение свернуто в трей."), icon, 2000);
    }
}

void MainWindow::handleIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason){
    case QSystemTrayIcon::Trigger:
        if(!this->isVisible()){
            this->show();
        } else {
            this->hide();
        }
        break;

    default:
        break;
    }
}

void MainWindow::handleSettings()
{
    _settings = new MainWindowSettings(this->ui->_pluginsWidget->layout()->count());
    _settings->setAttribute( Qt::WA_DeleteOnClose);
    QObject::connect(_settings, &MainWindowSettings::gridChanged, this, &MainWindow::handleGridChanged);
    QObject::connect(_settings, &MainWindowSettings::themeChanged, this, &MainWindow::handleStyleChanged);
    _settings->show();
}

void MainWindow::handleAddPluginWidget(QWidget* widget)
{
    PluginWidgetForm* pluginWidget = qobject_cast<PluginWidgetForm*>(widget);
    this->ui->_pluginsWidget->layout()->addWidget(pluginWidget);
    QObject::connect(pluginWidget, &PluginWidgetForm::closePlugin, this, &MainWindow::handleDeleteWidgetPlugin);
}

void MainWindow::handleLoadNewPlugin()
{
    PluginLoader l;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Загрузить плагин"), QString(),
                                                    tr("Files (*.dll *.so)"));
    emit loadNewPlugin(fileName);
}

void MainWindow::handleStyleChanged(const QString & style){
    QFile file;
    if(style.toLower()=="dark")
        file.setFileName(":/dark.qss");
    else
        file.setFileName(":/light.qss");
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream stream(&file);
    emit styleChanged(stream.readAll());
}

void MainWindow::handleGridChanged(int rows, int columns)
{
    int k = 0;
    QList<QWidget*> widgets;
    for (int i = 0; i< _widgetsLayout->rowCount(); i++)
    {
        for(int j = 0; j< _widgetsLayout->columnCount(); j++)
        {
            widgets.push_back(_widgetsLayout->itemAtPosition(i, j)->widget());
            _widgetsLayout->removeItem(_widgetsLayout->itemAtPosition(i, j));
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(k == widgets.size())
            {
                return;
            }
            _widgetsLayout->addWidget(widgets[k++], i, j);
        }
    }
}

void MainWindow::handleShowMessage(const QString &title, const QString &message)
{

    this->trayIcon->showMessage(QString(title), QString(message), QIcon(), 10000);
}


void MainWindow::handleDeleteWidgetPlugin(PluginWidgetForm* plugin)
{
    int n = QMessageBox::warning(0, tr("Warning"), tr("Плагин будет удален. Продолжить?"),
                                 tr("Да"),
                                 tr("Нет"),
                                 QString(),
                                 0,
                                 1
                                 );
    if(n==0)
    {
        this->_widgetsLayout->removeWidget(plugin);
        emit deletePluginWidget(plugin);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
