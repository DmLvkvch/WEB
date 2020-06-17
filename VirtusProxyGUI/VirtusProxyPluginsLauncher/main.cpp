#include "mainwindow.h"

#include <QApplication>
#include <QTextCodec>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "pluginloader.h"
#include "pluginhandler.h"
#include "pluginviewcontroller.h"
#include "pluginiface.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PluginLoader loader;
    PluginHandler handler;
    PluginViewController viewController;
    MainWindow window(viewController);
    window.show();
    QObject::connect(&window, &MainWindow::styleChanged, &a, &QApplication::setStyleSheet);
    QObject::connect(&loader, &PluginLoader::pluginCreated, &handler, &PluginHandler::handlePluginCreated);
    QObject::connect(&loader, &PluginLoader::pluginCreated, &viewController, &PluginViewController::handlePluginCreated);
    QObject::connect(&viewController, &PluginViewController::pluginViewRemoved, &handler, &PluginHandler::handlePluginViewRemoved);
    QObject::connect(&handler, &PluginHandler::pluginStopped, &loader, &PluginLoader::handlePluginStopped);
    QObject::connect(&viewController, &PluginViewController::pluginCreated, &window, &MainWindow::handleAddPluginWidget);
    QObject::connect(&window, &MainWindow::deletePluginWidget, &viewController, &PluginViewController::handlePluginDeleted);
    QObject::connect(&window, &MainWindow::loadNewPlugin, &loader, &PluginLoader::handleLoadNewPlugin);
    QObject::connect(&viewController, &PluginViewController::messageNotification, &window, &MainWindow::handleShowMessage);
    QDir dir;
    dir.cdUp();
    dir.cdUp();
    dir.cdUp();
    dir.cd("buildPlugins");
    dir.cd("debug");
    dir.cd("bin");
    loader.loadFromDir(dir);
    handler.start();
    return a.exec();
}
