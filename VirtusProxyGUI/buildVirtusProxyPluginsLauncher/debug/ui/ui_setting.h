/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *_name;
    QLineEdit *_value;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(561, 84);
        horizontalLayout = new QHBoxLayout(Setting);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _name = new QLabel(Setting);
        _name->setObjectName(QString::fromUtf8("_name"));
        _name->setMinimumSize(QSize(64, 0));

        horizontalLayout->addWidget(_name);

        _value = new QLineEdit(Setting);
        _value->setObjectName(QString::fromUtf8("_value"));

        horizontalLayout->addWidget(_value);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Form", nullptr));
        _name->setText(QCoreApplication::translate("Setting", "name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
