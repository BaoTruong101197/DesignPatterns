#ifndef IONLISTENER_H
#define IONLISTENER_H

#include <iostream>
#include <string>

using namespace std;

class IOnListener
{
public:
    IOnListener();
    virtual ~IOnListener();

    virtual void updateData(const string& _name, const int& _id) = 0;
};

#endif // IONLISTENER_H
