#ifndef ACCOUNTSHMISERVICE_H
#define ACCOUNTSHMISERVICE_H
#include "AppService.h"
#include "UserProfileService.h"

class UserProfileService;
class AccountsHmiService : public AppService
{
private:
    UserProfileService* m_proxy;
    string m_inputData;
public:
    AccountsHmiService(const string& _input);

    void onServiceConnected();

    void requestGetData();
};

#endif // ACCOUNTSHMISERVICE_H
