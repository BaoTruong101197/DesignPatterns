#ifndef IBASELISTENER_H
#define IBASELISTENER_H

#include <iostream>
#include <vector>
#include <string>
#include "IOnListener.h"

using namespace std;

class IBaseListener
{
public:
    IBaseListener();

    void registerListener(IOnListener* _iOnListener);
    void unRegisterListener(IOnListener* _iOnListener);
    void notifyObservers(const string& _name, const int& _id);
private:
    vector<IOnListener* > m_vIOnListener;
};

#endif // IBASELISTENER_H
