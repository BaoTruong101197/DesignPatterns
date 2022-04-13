#ifndef APPSERVICE_H
#define APPSERVICE_H
#include <iostream>
using namespace std;

class AppService
{
public:
    AppService();
    virtual ~AppService();
    virtual void onServiceConnected();
};

#endif // APPSERVICE_H
