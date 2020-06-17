#ifndef PLUGINVIEWCONTROLLER_H
#define PLUGINVIEWCONTROLLER_H

#include <QWidget>
#include <QEvent>
class Message;
#include "settingsitem.h"
class PluginIFace;

class PluginViewController : public QObject
{
    Q_OBJECT
public:
    PluginViewController();
    PluginViewController(const PluginViewController& controller);
    QWidget* addPlugin(PluginIFace*);
    QList<QWidget*> addPlugins(QList<PluginIFace*>);
    QWidget* getWidget(PluginIFace*);
    PluginIFace *getPlugin(QWidget*);
    ~PluginViewController();
public slots:
    void handleMessageReceived(PluginIFace* plugin, const Message &message);
    void handlePluginDeleted(QWidget*);///<удаление плагина из qhash и delete его
    void handlePluginCreated(PluginIFace*);
signals:
    void settingsChanged(PluginIFace*, QList<SettingsItem>);
    void pluginCreated(QWidget*);
    void pluginViewRemoved(PluginIFace*);///<удаление плагина
    void messageReceived(PluginIFace*, const Message & message);
    void newEvent(PluginIFace*, QEvent);
    void messageNotification(const QString &title, const QString &message);
private:
    QHash<PluginIFace*, QWidget*> _plugins;
};

#endif // PLUGINVIEWCONTROLLER_H
