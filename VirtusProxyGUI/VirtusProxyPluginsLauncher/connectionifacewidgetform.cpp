#include "connectionifacewidgetform.h"
#include "ui_connectionifacewidgetform.h"
#include "connectioniface.h"
#include <QPainter>
#include <QStyleOption>
ConnectionIFaceWidgetForm::ConnectionIFaceWidgetForm(ConnectionIFace* iface, QWidget* parent) :
    QWidget(parent),
    _iface(iface),
    ui(new Ui::ConnectionIFaceWidgetForm)
{
    ui->setupUi(this);
    ui->_ifaceName->setText(_iface->name());
    ui->_receivedNumber->setText(QString::number(_countIn));
    ui->_sendedNumber->setText(QString::number(_countOut));
    initConnection();
    QObject::connect(_iface, &ConnectionIFace::connectionStatusChanged, this, &ConnectionIFaceWidgetForm::connection);
    QObject::connect(_iface, &ConnectionIFace::messageSended, this, &ConnectionIFaceWidgetForm::msgOut);
    QObject::connect(_iface, &ConnectionIFace::messageReceived, this, &ConnectionIFaceWidgetForm::msgIn);
}

void ConnectionIFaceWidgetForm::initConnection()
{
    ui->_icon->setPixmap(_iface->icon().pixmap(20, 20));
    connection();
}

void ConnectionIFaceWidgetForm::connection()
{
    QPixmap connect;
    switch (_iface->status())
    {
    case ConnectionIFace::Status::Connected:
        connect.load(":images/img/circle_green_16_ns.png");
        break;
    case ConnectionIFace::Status::Disconnected:
        connect.load(":images/img/circle_red_16_ns.png");
        break;
    default:
        connect.load(":images/img/circle_grey_16_ns.png");
        break;
    }
    ui->_connectionStatus->setPixmap(connect);
}

void ConnectionIFaceWidgetForm::msgIn()
{
    this->_countIn++;
    ui->_receivedNumber->setText(QString::number(this->_countIn));
}

void ConnectionIFaceWidgetForm::msgOut()
{
    this->_countOut++;
    ui->_sendedNumber->setText(QString::number(this->_countOut));
}

ConnectionIFaceWidgetForm::~ConnectionIFaceWidgetForm()
{
    delete ui;
}
