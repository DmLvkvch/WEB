#ifndef MESSAGEMODEL_H
#define MESSAGEMODEL_H

#include <QAbstractTableModel>
#include <QSharedPointer>
#include "message.h"

class MessageModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit MessageModel(QSharedPointer<QList<Message>> _logs);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    bool insertRows(int row, int count, const QModelIndex &parent) override;
    void setRows(int value);
private:
    int rows;
    QString getLogsColumnName(const int& index) const;///<имя колонки по индексу
    QStringList getLogsTableHeader();///<список колонок
    int getLogsTableColumnIndex(const QString& name);///<индекс колонки по названию
    enum class LogsColumns : int
    {
        MessageNumber,
        Id,
        Sender,
        Receiver,
        Date,
        Status,
        Priority,
        Format,
        Caption,
        Description,
        Data,
        ColumnsNum
    };
    QSharedPointer<QList<Message>> _logs;
};

#endif // MESSAGEMODEL_H
