#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QString>
#include <QDir>
#include <QObject>
class PluginIFace;
typedef void (*deletePluginPtr)(PluginIFace*);

class PluginLoader : public QObject
{
    Q_OBJECT
public:
    PluginLoader();
    ~PluginLoader();
public slots:
    QList<PluginIFace*> loadFromDir(QString dirPath);
    QList<PluginIFace*> loadFromDir(QDir dir);
    PluginIFace* loadLib(QString libPath);
    void handleLoadNewPlugin(QString libraryPath);
    void deletePlugin(PluginIFace* plugin);
    void deletePlugin(QList<PluginIFace*> plugins);
    void handlePluginStopped(PluginIFace* plugin);
signals:
    void pluginCreated(PluginIFace*);
private:
    QHash<PluginIFace*, deletePluginPtr> _plugins;
};

#endif // PLUGINLOADER_H
