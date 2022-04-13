#include "ObserverOne.h"

void ObserverOne::updateData(const string &_name, const int &_id)
{
    cout << "ObserverOne received the signal from DataBase";
    cout << "Name: " << _name << ", Id: " << _id << "\n";
}
