#include "connectioniface.h"
#include "message.h"
#include "pluginiface.h"
#include <QDebug>
PluginIFace::PluginIFace(QString _name, QString _version, QIcon _icon):QObject(nullptr)
{
    this->_version = _version;
    this->_icon = _icon;
    this->_name = _name;
}

PluginIFace::~PluginIFace()
{
    qDebug() << Q_FUNC_INFO;
}

QSharedPointer<QList<Message>> PluginIFace::messageList()
{
    QSharedPointer<QList<Message>> messages(new QList<Message>());
    foreach(auto& iface, this->_connectedIFaces)
    {
        messages->append(iface->messageList());
    }
    qDebug()<<"plugif "<<messages.data()<<" "<<messages<<" "<<messages.get();
    return messages;
}


QString PluginIFace::name() const
{
    return this->_name;
}

QList<QSharedPointer<ConnectionIFace>> & PluginIFace::connectedIFaces()
{
    return this->_connectedIFaces;
}

QString PluginIFace::version() const
{
    return _version;
}

QString PluginIFace::id()
{
    return QString();
}

QIcon PluginIFace::icon(){
    return _icon;
}

void PluginIFace::handleMessageReceived(const Message & message)
{
    emit received(message);
}
void PluginIFace::handleMessageSended(const Message & message)
{
    emit sended(message);
}

void PluginIFace::addConnectionIFace(ConnectionIFace* iface)
{
    this->_connectedIFaces.push_back(QSharedPointer<ConnectionIFace>(iface));
    QObject::connect(iface, &ConnectionIFace::messageSended, this, &PluginIFace::handleMessageSended);
    QObject::connect(iface, &ConnectionIFace::messageReceived, this, &PluginIFace::handleMessageReceived);
}
