#ifndef MAINWINDOW_H
#define MAINWINDOW_H

class MainWindowSettings;
class PluginWidgetForm;
class PluginIFace;
class PluginViewController;
class PluginHandler;

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLibrary>
#include <QScrollArea>
#include <QCloseEvent>
#include <QSystemTrayIcon>
#include <QAction>
#include <QDir>
#include <QMenuBar>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE
/*!
 *  class-widget displaying the main window
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(PluginViewController controller, QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void loadNewPlugin(QString libraryPath);
    void deletePluginWidget(QWidget*);///<удаление плагина
    void styleChanged(QString style);
public slots:
    void handleDeleteWidgetPlugin(PluginWidgetForm*);
    void handleAddPluginWidget(QWidget*);
    void handleShowMessage(const QString &title, const QString &message);
    void handleStyleChanged(const QString &style);
protected:
    void closeEvent(QCloseEvent * event) override;
private slots:
    void handleSettings(); ///<настройки главного окна
    void handleLoadNewPlugin(); ///<загрузка нового плагина
    void handleGridChanged(int rows, int columns);///<изменения сетки
    void handleIconActivated(QSystemTrayIcon::ActivationReason reason);

private:
    QMenuBar* createMenu();
    QSystemTrayIcon* createTray();
    QGridLayout* _widgetsLayout = nullptr;
    MainWindowSettings* _settings = nullptr;
    Ui::MainWindow *ui;
    QScrollArea* _scroll = nullptr;;
    QSystemTrayIcon* trayIcon = nullptr;
    PluginViewController* _controller;
};
#endif // MAINWINDOW_H
