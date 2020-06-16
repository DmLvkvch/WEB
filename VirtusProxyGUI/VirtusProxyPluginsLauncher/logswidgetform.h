#ifndef LOGSWIDGETFORM_H
#define LOGSWIDGETFORM_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QWidget>
#include "message.h"
namespace Ui {
class LogsWidgetForm;
}
class LogsWidgetForm : public QWidget
{
    Q_OBJECT

public:
    explicit LogsWidgetForm(QSharedPointer<QList<Message>> _logs, QWidget *parent = nullptr);
    ~LogsWidgetForm();
    void resizeEvent(QResizeEvent *event);
public slots:
    void handleAppendRow(const Message & message);///<добавление строки в конец таблицы
private:
    QAbstractTableModel* model;
    QSharedPointer<QList<Message>> _logs;
    Ui::LogsWidgetForm *ui;
    QSortFilterProxyModel *m;
};

#endif // LOGSWIDGETFORM_H
