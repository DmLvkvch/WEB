#include "modalwidget.h"
#include "ui_modalwidget.h"

ModalWidget::ModalWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModalWidget)
{
    ui->setupUi(this);
}

ModalWidget::~ModalWidget()
{
    delete ui;
}
