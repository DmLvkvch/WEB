/********************************************************************************
** Form generated from reading UI file 'pluginwidgetform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINWIDGETFORM_H
#define UI_PLUGINWIDGETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginWidgetForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *_pluginIcon;
    QLabel *_pluginName;
    QLabel *_pluginVersion;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox;
    QPushButton *_close;
    QVBoxLayout *_connectionIFacesLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *_settings;
    QPushButton *_messages;

    void setupUi(QWidget *PluginWidgetForm)
    {
        if (PluginWidgetForm->objectName().isEmpty())
            PluginWidgetForm->setObjectName(QString::fromUtf8("PluginWidgetForm"));
        PluginWidgetForm->resize(602, 394);
        verticalLayout_2 = new QVBoxLayout(PluginWidgetForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _pluginIcon = new QLabel(PluginWidgetForm);
        _pluginIcon->setObjectName(QString::fromUtf8("_pluginIcon"));

        horizontalLayout->addWidget(_pluginIcon);

        _pluginName = new QLabel(PluginWidgetForm);
        _pluginName->setObjectName(QString::fromUtf8("_pluginName"));
        _pluginName->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(_pluginName);

        _pluginVersion = new QLabel(PluginWidgetForm);
        _pluginVersion->setObjectName(QString::fromUtf8("_pluginVersion"));
        _pluginVersion->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(_pluginVersion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox = new QCheckBox(PluginWidgetForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        _close = new QPushButton(PluginWidgetForm);
        _close->setObjectName(QString::fromUtf8("_close"));
        _close->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(_close);


        verticalLayout->addLayout(horizontalLayout);

        _connectionIFacesLayout = new QVBoxLayout();
        _connectionIFacesLayout->setObjectName(QString::fromUtf8("_connectionIFacesLayout"));

        verticalLayout->addLayout(_connectionIFacesLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        _settings = new QPushButton(PluginWidgetForm);
        _settings->setObjectName(QString::fromUtf8("_settings"));

        horizontalLayout_2->addWidget(_settings);

        _messages = new QPushButton(PluginWidgetForm);
        _messages->setObjectName(QString::fromUtf8("_messages"));

        horizontalLayout_2->addWidget(_messages);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(PluginWidgetForm);

        QMetaObject::connectSlotsByName(PluginWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *PluginWidgetForm)
    {
        PluginWidgetForm->setWindowTitle(QCoreApplication::translate("PluginWidgetForm", "Form", nullptr));
        _pluginIcon->setText(QCoreApplication::translate("PluginWidgetForm", "TextLabel", nullptr));
        _pluginName->setText(QCoreApplication::translate("PluginWidgetForm", "TextLabel", nullptr));
        _pluginVersion->setText(QCoreApplication::translate("PluginWidgetForm", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("PluginWidgetForm", "\320\276\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \321\203\320\262\320\265\320\264\320\276\320\274\320\273\320\265\320\275\320\270\321\217", nullptr));
        _close->setText(QString());
        _settings->setText(QCoreApplication::translate("PluginWidgetForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        _messages->setText(QCoreApplication::translate("PluginWidgetForm", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginWidgetForm: public Ui_PluginWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINWIDGETFORM_H
