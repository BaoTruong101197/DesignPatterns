#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include "IBaseListener.h"

using namespace std;

class DataBase : public IBaseListener
{
public:
    DataBase();

    void setName(const string& _name);
    string getName();

    void setId(const int& _id);
    int getId();

    void editDataBase(const string& _name, const int& _id);

private:
    string m_strName {""};
    int m_nId {0};
};

#endif // DATABASE_H
