#include "pluginviewcontroller.h"
#include "pluginwidgetform.h"
#include <QDebug>
#include <QSignalMapper>
#include "pluginiface.h"

PluginViewController::PluginViewController()
{

}

PluginViewController::PluginViewController(const PluginViewController &controller):QObject()
{
    this->_plugins = controller._plugins;
}

QWidget* PluginViewController::addPlugin(PluginIFace *plugin)
{
    QWidget* widget = new PluginWidgetForm(plugin);
    this->_plugins.insert(plugin, widget);
    QObject::connect(plugin, &PluginIFace::received, this, &PluginViewController::handleMsgReceived);
    return widget;
}

QList<QWidget*> PluginViewController::addPlugins(QList<PluginIFace *> plugins)
{
    QList<QWidget*> widgets;
    foreach(auto &plugin, plugins)
    {
        widgets.push_back(addPlugin(plugin));
    }
    return  widgets;
}

QWidget* PluginViewController::getWidget(PluginIFace* plugin)
{
    if(!_plugins.contains(plugin))
        return nullptr;
    return _plugins.value(plugin);
}

PluginIFace* PluginViewController::getPlugin(QWidget* widget)
{
    for(auto it = _plugins.begin(); it!=_plugins.end(); ++it)
    {
        if(it.value() == widget)
        {
            return it.key();
        }
    }
    return nullptr;
}

PluginViewController::~PluginViewController()
{
    for(auto it = _plugins.begin(); it!=_plugins.end(); ++it)
    {
        emit pluginViewRemoved(it.key());
    }
}

void PluginViewController::handleMessageReceived(PluginIFace* plugin, const Message &message)
{
    emit messageReceived(plugin, message);
    QString title = plugin->name();
    QString val = message.data();
    emit messageNotification(title, val);
}

void PluginViewController::handlePluginDeleted(QWidget *plugin)
{
    emit pluginViewRemoved(getPlugin(plugin));
    _plugins.remove(getPlugin(plugin));
    delete plugin;
}

void PluginViewController::handlePluginCreated(PluginIFace* plugin)
{
    emit pluginCreated(addPlugin(plugin));
}

void PluginViewController::handleMsgReceived(const Message &message)
{
    for(auto it = _plugins.begin(); it!=_plugins.end(); ++it)
    {
        if(this->sender()==it.key())
        {
            handleMessageReceived(it.key(), message);
            return;
        }
    }
}
