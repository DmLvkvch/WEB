#include "skifdiagnosticpluginlib.h"
#include "skifdiagnosticplugin.h"
#include <QDebug>

PluginIFace *create()
{
    PluginIFace* plugin = nullptr;
    QIcon icon(":images/res/MainIcon.ico");
    plugin = new SkifDiagnosticPlugin("СкифДиагностика", "0.0.2", icon);
    qDebug()<<plugin;
    return plugin;
}

void deletePlugin(PluginIFace* plugin)
{
    SkifDiagnosticPlugin* castedPlugin = qobject_cast<SkifDiagnosticPlugin*>(plugin);
    if (castedPlugin)
    {
        delete castedPlugin;
    }
}
