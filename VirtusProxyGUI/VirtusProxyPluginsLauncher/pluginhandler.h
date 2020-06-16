#ifndef PLUGINHANDLER_H
#define PLUGINHANDLER_H

#include <QList>
#include <QObject>
class PluginIFace;
#include "settingsitem.h"
class PluginHandler : public QObject
{
    Q_OBJECT
public:
    PluginHandler();
    ~PluginHandler();
public slots:
    void handlePluginCreated(PluginIFace*);
    void handlePluginViewRemoved(PluginIFace*);
    void addPlugin(PluginIFace*);
    void addPlugins(QList<PluginIFace*>);
    void start(PluginIFace* plugin = nullptr);//если нулл, то выполняется для всех плагинов
    void stop(PluginIFace* plugin = nullptr);
    void reset(PluginIFace* plugin = nullptr);
    void setSettings(PluginIFace*, QList<SettingsItem>);
    void handleSettingChanged(PluginIFace*, QList<SettingsItem>);
signals:
    void pluginStopped(PluginIFace*);
private:
    QList<PluginIFace*> _plugins;
};

#endif // PLUGINHANDLER_H
