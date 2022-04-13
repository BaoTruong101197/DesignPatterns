#include <iostream>
#include "DataBase.h"
#include "IOnListener.h"
#include "IBaseListener.h"
#include "ObserverOne.h"

using namespace std;

int main()
{
    DataBase* m_data = new DataBase();
    m_data->registerListener(new ObserverOne());

    m_data->editDataBase("Bao", 23);
}
