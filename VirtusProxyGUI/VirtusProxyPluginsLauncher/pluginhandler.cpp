#include "pluginhandler.h"
#include "settingsitem.h"
#include "pluginiface.h"
#include <QDebug>
PluginHandler::PluginHandler()
{

}

void PluginHandler::addPlugin(PluginIFace * plugin)
{
    this->_plugins.push_back(plugin);
}

void PluginHandler::addPlugins(QList<PluginIFace*> plugins)
{
    this->_plugins.append(plugins);
}

void PluginHandler::start(PluginIFace *plugin)
{

    if(plugin!=nullptr)
    {
        plugin->start();
        return;
    }
    foreach(auto &_plugin, this->_plugins)
    {
        _plugin->start();
    }
}

void PluginHandler::stop(PluginIFace *plugin)
{
    if(plugin!=nullptr)
    {
        plugin->stop();
        emit pluginStopped(plugin);
        return;
    }
    foreach(auto &_plugin, this->_plugins)
    {
        _plugin->stop();
        emit pluginStopped(_plugin);
    }
}

void PluginHandler::reset(PluginIFace *plugin)
{
    if(plugin!=nullptr)
    {
        plugin->reset();
        return;
    }
    foreach(auto &_plugin, this->_plugins)
    {
        _plugin->reset();
    }
}

PluginHandler::~PluginHandler()
{
    foreach(auto& plugin, _plugins)
    {
        handlePluginViewRemoved(plugin);
    }
}

void PluginHandler::handlePluginCreated(PluginIFace *plugin)
{
    addPlugin(plugin);
    start(plugin);
}

void PluginHandler::handlePluginViewRemoved(PluginIFace* plugin)
{
    stop(plugin);
    _plugins.removeOne(plugin);
}

void PluginHandler::setSettings(PluginIFace* plugin, QList<SettingsItem> settings)
{

}

void PluginHandler::handleSettingChanged(PluginIFace *, QList<SettingsItem>)
{

}
