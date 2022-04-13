#include "UserProfileService.h"

UserProfileService::UserProfileService(const string &data)
{
    m_strData = data;
}

UserProfileService::~UserProfileService()
{

}

static UserProfileService* instance = nullptr;

UserProfileService *UserProfileService::getInstance(const string& data)
{
    if (nullptr != instance) {
        return instance;
    }
    instance = new UserProfileService(data);
    return instance;
}

void UserProfileService::requestGetData()
{
    cout << "data is " << m_strData << "\n";
}
