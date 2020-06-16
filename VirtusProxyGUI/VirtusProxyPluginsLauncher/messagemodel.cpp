#include "messagemodel.h"
#include <QDebug>
MessageModel::MessageModel(QSharedPointer<QList<Message>> _logs): QAbstractTableModel(nullptr),_logs(_logs)
{
    this->rows = _logs->size();
}

MessageModel::~MessageModel()
{

}

int MessageModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return rows;
}

int MessageModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return static_cast<int>(LogsColumns::ColumnsNum);
}

QVariant MessageModel::data(const QModelIndex &index, int role) const
{
    if(role != Qt::DisplayRole)
    {
        return QVariant();
    }

    if(index.column() < 0 ||
            columnCount() <= index.column() ||
            index.row() < 0 ||
            rowCount() <= index.row())
    {
        return QVariant();
    }
    LogsColumns column = static_cast<LogsColumns>(index.column());
    QVariant item;
    Message message = _logs->at(index.row());
    switch(column)
    {
    case LogsColumns::MessageNumber:
        item = index.row()+1;
        break;
    case LogsColumns::Id:
        item = QVariant((unsigned long long)message.id());
        break;
    case LogsColumns::Date:
        item = message.date();
        break;
    case LogsColumns::Sender:
        item = message.sender();
        break;
    case LogsColumns::Receiver:
        item = message.receiver();
        break;
    case LogsColumns::Status:
        item = message.status();
        break;
    case LogsColumns::Caption:
        item = message.caption();
        break;
    case LogsColumns::Description:
        item = message.description();
        break;
    case LogsColumns::Priority:
        item = message.priority();
        break;
    case LogsColumns::Format:
        item = Message::formatToString(message.format());
        break;
    case LogsColumns::Data:
        item = QString::fromStdString(message.data().toStdString());
        break;
    default:
        break;
    }
    return item;
}

QVariant MessageModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal)
    {
        return getLogsColumnName(section);
    }
    return QVariant();
}

bool MessageModel::insertRows(int row, int count, const QModelIndex &parent)
{
   beginInsertRows(parent, row, row + count-1);
   endInsertRows();
   return true;
}

void MessageModel::setRows(int value)
{
    rows = value;
}

QString MessageModel::getLogsColumnName(const int &index) const
{
    switch (static_cast<LogsColumns>(index))
    {
    case LogsColumns::MessageNumber:
        return QObject::tr("Номер");
    case LogsColumns::Id:
        return QObject::tr("Идентификатор");
    case LogsColumns::Date:
        return QObject::tr("Время");
    case LogsColumns::Sender:
        return QObject::tr("Отправитель");
    case LogsColumns::Receiver:
        return QObject::tr("Получатель");
    case LogsColumns::Status:
        return QObject::tr("Статус");
    case LogsColumns::Caption:
        return QObject::tr("Заголовок");
    case LogsColumns::Description:
        return QObject::tr("Описание");
    case LogsColumns::Priority:
        return QObject::tr("Приоритет");
    case LogsColumns::Format:
        return QObject::tr("Формат");
    case LogsColumns::Data:
        return QObject::tr("Данные");
    default:
        return "Unknown column index";
    }
    return QString();
}

QStringList MessageModel::getLogsTableHeader()
{
    QStringList list;
    for (int i = 0; i < int(LogsColumns::ColumnsNum); ++i)
    {
        list << getLogsColumnName(i);
    }
    return list;
}

int MessageModel::getLogsTableColumnIndex(const QString &name)
{
    auto header = getLogsTableHeader();
    for (int i = 0; i < header.size(); ++i)
    {
        if (name == header.at(i))
        {
            return i;
        }
    }
    return -1;
}
