#ifndef USERPROFILESERVICE_H
#define USERPROFILESERVICE_H
#include <iostream>
#include <string>
using namespace std;

class UserProfileService
{
private:
    string m_strData;

    UserProfileService(const string& data);
    virtual ~UserProfileService();
public:
    static UserProfileService *getInstance(const string& data);

    void requestGetData();
};

#endif // USERPROFILESERVICE_H
