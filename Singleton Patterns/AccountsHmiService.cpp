#include "AccountsHmiService.h"

AccountsHmiService::AccountsHmiService(const string& _input)
{
    m_inputData = _input;
}

void AccountsHmiService::onServiceConnected()
{
    m_proxy = UserProfileService::getInstance(m_inputData);
}

void AccountsHmiService::requestGetData()
{
    m_proxy->requestGetData();
}
