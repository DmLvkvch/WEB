/********************************************************************************
** Form generated from reading UI file 'modalwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODALWIDGET_H
#define UI_MODALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ModalWidget
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModalWidget)
    {
        if (ModalWidget->objectName().isEmpty())
            ModalWidget->setObjectName(QString::fromUtf8("ModalWidget"));
        ModalWidget->resize(384, 283);
        buttonBox = new QDialogButtonBox(ModalWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ModalWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModalWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModalWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModalWidget);
    } // setupUi

    void retranslateUi(QDialog *ModalWidget)
    {
        ModalWidget->setWindowTitle(QCoreApplication::translate("ModalWidget", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModalWidget: public Ui_ModalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODALWIDGET_H
