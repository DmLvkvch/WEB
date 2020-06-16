#include "pluginloader.h"
#include "pluginiface.h"
#include <QDebug>
#include <QLibrary>

PluginLoader::PluginLoader()
{

}

QList<PluginIFace *> PluginLoader::loadFromDir(QString dirPath)
{
    QDir dir(dirPath);
    return loadFromDir(dir);
}

QList<PluginIFace *> PluginLoader::loadFromDir(QDir dir)
{
    QList<PluginIFace*> pluginList;
#ifdef Q_OS_UNIX
    QString extension("so");
#else
    QString extension("dll");
#endif
    foreach (auto finfo , dir.entryInfoList())
    {
        if (finfo.suffix() == extension)
        {
            pluginList.push_back(loadLib(finfo.absoluteFilePath()));
        }
    }
    return pluginList;
}

PluginIFace *PluginLoader::loadLib(QString libPath)
{
    if(!QFileInfo::exists(libPath))
    {
        return nullptr;
    }
    qDebug() << "Try load" << libPath;
    QLibrary lib;
    if(QLibrary::isLibrary(libPath))
    {
        lib.setFileName(libPath);
        lib.load();
        if(lib.isLoaded())
        {
            qDebug() << "Ok";
        }
        else
        {
            qDebug() << "Error " << lib.errorString();
            return nullptr;
        }
    }
    else
    {
        qDebug() << "Not a library";
        return nullptr;
    }

    typedef PluginIFace *(*createPlugin)();
    createPlugin cwf = (createPlugin)lib.resolve("create");
    deletePluginPtr tmp = (deletePluginPtr)lib.resolve("deletePlugin");
    if (cwf)
    {
        PluginIFace *plugin = cwf();
        if(tmp)
        {
            _plugins.insert(plugin, tmp);
            emit pluginCreated(plugin);
        }
        return  plugin;
    }
    return nullptr;
}

void PluginLoader::handleLoadNewPlugin(QString libraryPath)
{
    loadLib(libraryPath);
}

void PluginLoader::deletePlugin(PluginIFace *plugin)
{
    deletePluginPtr ptr = _plugins.value(plugin);
    _plugins.remove(plugin);
    ptr(plugin);
}

void PluginLoader::deletePlugin(QList<PluginIFace *> plugins)
{
    foreach(auto &plugin, plugins)
    {
        deletePlugin(plugin);
    }
}

void PluginLoader::handlePluginStopped(PluginIFace *plugin)
{
    deletePlugin(plugin);
}

PluginLoader::~PluginLoader()
{
    for(auto it = _plugins.begin(); it!=_plugins.end(); ++it)
    {
        deletePlugin(it.key());
    }
}
