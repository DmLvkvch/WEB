/********************************************************************************
** Form generated from reading UI file 'logswidgetform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSWIDGETFORM_H
#define UI_LOGSWIDGETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogsWidgetForm
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QWidget *LogsWidgetForm)
    {
        if (LogsWidgetForm->objectName().isEmpty())
            LogsWidgetForm->setObjectName(QString::fromUtf8("LogsWidgetForm"));
        LogsWidgetForm->resize(443, 223);
        horizontalLayout = new QHBoxLayout(LogsWidgetForm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableView = new QTableView(LogsWidgetForm);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(LogsWidgetForm);

        QMetaObject::connectSlotsByName(LogsWidgetForm);
    } // setupUi

    void retranslateUi(QWidget *LogsWidgetForm)
    {
        LogsWidgetForm->setWindowTitle(QCoreApplication::translate("LogsWidgetForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogsWidgetForm: public Ui_LogsWidgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSWIDGETFORM_H
