#include "message.h"
#include "logswidgetform.h"
#include "ui_logswidgetform.h"
#include <QDebug>
#include <QSortFilterProxyModel>
#include "messagemodel.h"
LogsWidgetForm::LogsWidgetForm(QSharedPointer<QList<Message>> logs, QWidget *parent) :
    QWidget(parent), _logs(logs),
    ui(new Ui::LogsWidgetForm)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Сообщения"));
    model = new MessageModel(logs);
    this->ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setVisible(true);
    ui->tableView->show();
    ui->tableView->setSortingEnabled(true);
    m = new QSortFilterProxyModel(this);
    m->setSourceModel(model);
    ui->tableView->setModel(m);

}

LogsWidgetForm::~LogsWidgetForm()
{
    delete m;
    delete model;
    delete ui;
}

void LogsWidgetForm::handleAppendRow(const Message & message)
{
    _logs->push_back(message);
    int row = model->rowCount();
    qobject_cast<MessageModel*>(model)->setRows(_logs->size());
    model->insertRow(row);
    QModelIndex idx = model->index(row, 1);
    if (idx.isValid())
    {
            model->setData(idx.sibling(idx.row(), 0), row); // added here
    }
}


void LogsWidgetForm::resizeEvent(QResizeEvent *event)
{

}
