#ifndef SKIFCONNECTION_H
#define SKIFCONNECTION_H

#include "connectioniface.h"

class SkifConnection : public ConnectionIFace
{
    Q_OBJECT
public:
    SkifConnection();
public:
    void send(const Message &message);
    void receive(const Message &message);
    void connect();
    void disctonnect();
    void reset();
};

#endif // SKIFCONNECTION_H
