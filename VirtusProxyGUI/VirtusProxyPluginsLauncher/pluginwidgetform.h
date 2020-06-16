#ifndef PLUGINWIDGETFORM_H
#define PLUGINWIDGETFORM_H

#include <QWidget>
#include <QLibrary>
class PluginIFace;
class SettingsWidget;
namespace Ui {
class PluginWidgetForm;
}
class PluginWidgetForm : public QWidget
{
    Q_OBJECT
public:
    explicit PluginWidgetForm(PluginIFace* plugin, QWidget *parent = nullptr);
    ~PluginWidgetForm();
protected:
    void paintEvent(QPaintEvent * e);
private slots:
    void handleOnLogsClicked();
    void handleOnSettingsClicked();
    void handleClose();
signals:
    void closePlugin(PluginWidgetForm*);
private:
    PluginIFace* _plugin = nullptr;
    Ui::PluginWidgetForm *ui;
};

#endif // PLUGINWIDGETFORM_H
