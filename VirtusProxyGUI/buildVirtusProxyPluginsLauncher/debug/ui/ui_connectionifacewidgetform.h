/********************************************************************************
** Form generated from reading UI file 'connectionifacewidgetform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONIFACEWIDGETFORM_H
#define UI_CONNECTIONIFACEWIDGETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionIFaceWidgetForm
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *_receivedNumber;
    QLabel *_connectionStatus;
    QLabel *_icon;
    QLabel *_received;
    QLabel *_sendedNumber;
    QLabel *_ifaceName;
    QLabel *_sended;

    void setupUi(QWidget *ConnectionIFaceWidgetForm)
    {
        if (ConnectionIFaceWidgetForm->objectName().isEmpty())
            ConnectionIFaceWidgetForm->setObjectName(QString::fromUtf8("ConnectionIFaceWidgetForm"));
        ConnectionIFaceWidgetForm->resize(787, 55);
        ConnectionIFaceWidgetForm->setMinimumSize(QSize(0, 55));
        horizontalLayout = new QHBoxLayout(ConnectionIFaceWidgetForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _receivedNumber = new QLabel(ConnectionIFaceWidgetForm);
        _receivedNumber->setObjectName(QString::fromUtf8("_receivedNumber"));

        gridLayout->addWidget(_receivedNumber, 0, 4, 1, 1);

        _connectionStatus = new QLabel(ConnectionIFaceWidgetForm);
        _connectionStatus->setObjectName(QString::fromUtf8("_connectionStatus"));
        _connectionStatus->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(_connectionStatus, 0, 0, 1, 1);

        _icon = new QLabel(ConnectionIFaceWidgetForm);
        _icon->setObjectName(QString::fromUtf8("_icon"));

        gridLayout->addWidget(_icon, 0, 1, 1, 1);

        _received = new QLabel(ConnectionIFaceWidgetForm);
        _received->setObjectName(QString::fromUtf8("_received"));

        gridLayout->addWidget(_received, 0, 3, 1, 1);

        _sendedNumber = new QLabel(ConnectionIFaceWidgetForm);
        _sendedNumber->setObjectName(QString::fromUtf8("_sendedNumber"));

        gridLayout->addWidget(_sendedNumber, 0, 6, 1, 1);

        _ifaceName = new QLabel(ConnectionIFaceWidgetForm);
        _ifaceName->setObjectName(QString::fromUtf8("_ifaceName"));
        _ifaceName->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(_ifaceName, 0, 2, 1, 1);

        _sended = new QLabel(ConnectionIFaceWidgetForm);
        _sended->setObjectName(QString::fromUtf8("_sended"));

        gridLayout->addWidget(_sended, 0, 5, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(ConnectionIFaceWidgetForm);

        QMetaObject::connectSlotsByName(ConnectionIFaceWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *ConnectionIFaceWidgetForm)
    {
        ConnectionIFaceWidgetForm->setWindowTitle(QCoreApplication::translate("ConnectionIFaceWidgetForm", "Form", nullptr));
        _receivedNumber->setText(QString());
        _connectionStatus->setText(QString());
        _icon->setText(QString());
        _received->setText(QCoreApplication::translate("ConnectionIFaceWidgetForm", "\320\237\321\200\320\270\320\275\321\217\321\202\320\276:", nullptr));
        _sendedNumber->setText(QString());
        _ifaceName->setText(QString());
        _sended->setText(QCoreApplication::translate("ConnectionIFaceWidgetForm", "\320\236\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\276:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionIFaceWidgetForm: public Ui_ConnectionIFaceWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONIFACEWIDGETFORM_H
