#include <iostream>
#include "AbstractFactory.h"
#include "Enums.h"
#include "SamsungFactory.h"
using namespace std;

int main()
{
    AbstractFactory * abs = new SamsungFactory();
    abs->createProductObject(PRODUCT_GALAXYS22, "Sam sung galaxy 22", 13000)->getProductInformation();
    return 0;
}
