#include <iostream>
#include "AccountsHmiService.h"

using namespace std;

int main()
{
    AccountsHmiService* acc = new AccountsHmiService("Bao dep trai");
    acc->onServiceConnected();
    acc->requestGetData();
    return 0;
}
