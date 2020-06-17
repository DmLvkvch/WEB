/********************************************************************************
** Form generated from reading UI file 'mainwindowsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWSETTINGS_H
#define UI_MAINWINDOWSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowSettings
{
public:
    QPushButton *_save;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *_themeMod;

    void setupUi(QWidget *MainWindowSettings)
    {
        if (MainWindowSettings->objectName().isEmpty())
            MainWindowSettings->setObjectName(QString::fromUtf8("MainWindowSettings"));
        MainWindowSettings->resize(558, 330);
        _save = new QPushButton(MainWindowSettings);
        _save->setObjectName(QString::fromUtf8("_save"));
        _save->setGeometry(QRect(9, 293, 93, 28));
        widget = new QWidget(MainWindowSettings);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 388, 52));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_2->addWidget(comboBox_2);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        _themeMod = new QComboBox(widget);
        _themeMod->setObjectName(QString::fromUtf8("_themeMod"));

        horizontalLayout_3->addWidget(_themeMod);


        retranslateUi(MainWindowSettings);

        QMetaObject::connectSlotsByName(MainWindowSettings);
    } // setupUi

    void retranslateUi(QWidget *MainWindowSettings)
    {
        MainWindowSettings->setWindowTitle(QCoreApplication::translate("MainWindowSettings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        _save->setText(QCoreApplication::translate("MainWindowSettings", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindowSettings", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\201\320\265\321\202\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowSettings", "\321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowSettings", "\321\201\321\202\320\276\320\273\320\261\321\206\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindowSettings", "\320\242\320\265\320\274\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowSettings: public Ui_MainWindowSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWSETTINGS_H
