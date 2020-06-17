#include "pluginwidgetform.h"
#include "ui_pluginwidgetform.h"
#include "pluginiface.h"
#include "connectioniface.h"
#include "connectionifacewidgetform.h"
#include "settingswidget.h"
#include "logswidgetform.h"
#include <QPainter>
#include <QStyleOption>
#include <QMap>
#include <QDebug>
#include <QCommonStyle>
#include <QMessageBox>

PluginWidgetForm::PluginWidgetForm(PluginIFace* plugin, QWidget *parent) :
    QWidget(parent),_plugin(plugin),
    ui(new Ui::PluginWidgetForm)
{
    ui->setupUi(this);
    ui->_pluginIcon->setPixmap(QPixmap(this->_plugin->icon().pixmap(20, 20)));
    ui->_pluginName->setText(this->_plugin->name());
    ui->_pluginVersion->setText(this->_plugin->version());
    foreach(auto& iface, this->_plugin->connectedIFaces())
    {
        ui->_connectionIFacesLayout->addWidget(new ConnectionIFaceWidgetForm(iface.data()));
    }
    QCommonStyle style;
    ui->_close->setIcon(style.standardIcon(QStyle::SP_TitleBarCloseButton));
    QObject::connect(ui->_messages, &QPushButton::clicked, this, &PluginWidgetForm::handleOnLogsClicked);
    QObject::connect(ui->_settings, &QPushButton::clicked, this, &PluginWidgetForm::handleOnSettingsClicked);
    QObject::connect(ui->_close, &QPushButton::clicked, this, &PluginWidgetForm::handleClose);
}

void PluginWidgetForm::handleClose()
{
    int n = QMessageBox::warning(0, tr("Предупреждение"), tr("Плагин будет удален. Продолжить?"),
                                 tr("Да"), tr("Нет"), QString(), 0, 1);
    if(n==0)
    {
        emit closePlugin();
    }
}

void PluginWidgetForm::paintEvent(QPaintEvent * e)
{
    QWidget::paintEvent(e);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    p.drawRoundedRect(0,5,width()-5, height()-7,3,3);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

PluginWidgetForm::~PluginWidgetForm()
{
    delete ui;
}

void PluginWidgetForm::handleOnLogsClicked()
{
    LogsWidgetForm* l = new LogsWidgetForm(_plugin->messageList());
    l->setAttribute( Qt::WA_DeleteOnClose);
    QObject::connect(_plugin, &PluginIFace::received, l, &LogsWidgetForm::handleAppendRow);
    QObject::connect(_plugin, &PluginIFace::sended, l, &LogsWidgetForm::handleAppendRow);
    l->show();
}

void PluginWidgetForm::handleOnSettingsClicked()
{
    SettingsWidget* s = new SettingsWidget(this->_plugin->connectedIFaces());
    s->setAttribute( Qt::WA_DeleteOnClose);
    s->show();
}
