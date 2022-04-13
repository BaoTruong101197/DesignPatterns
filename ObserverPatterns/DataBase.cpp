#include "DataBase.h"

DataBase::DataBase()
{

}

void DataBase::setName(const string &_name)
{
    m_strName = _name;
    notifyObservers(m_strName, m_nId);
}

string DataBase::getName()
{
    return m_strName;
}

void DataBase::setId(const int &_id)
{
    m_nId = _id;
    notifyObservers(m_strName, m_nId);
}

int DataBase::getId()
{
    return m_nId;
}

void DataBase::editDataBase(const string &_name, const int &_id)
{
    m_strName = _name;
    m_nId = _id;

    notifyObservers(m_strName, m_nId);
}
