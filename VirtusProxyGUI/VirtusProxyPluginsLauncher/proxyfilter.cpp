#include "proxyfilter.h"

ProxyFilter::ProxyFilter(QObject* parent)
{

}

bool ProxyFilter::lessThan(const QModelIndex &left,
                           const QModelIndex &right) const
{
    return true;
}

bool ProxyFilter::filterAcceptsRow(int sourceRow,
                                   const QModelIndex &sourceParent) const
{
    return true;
}

bool ProxyFilter::dateInRange(const QDate &date) const
{
    return true;
}

void ProxyFilter::setFilterMinimumDate(const QDate &date)
{
    minDate = date;
    invalidateFilter();
}

void ProxyFilter::setFilterMaximumDate(const QDate &date)
{
    maxDate = date;
    invalidateFilter();
}
