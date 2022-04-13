#ifndef APPLEFACTORY_H
#define APPLEFACTORY_H
#include <iostream>
#include <string>
#include "Product.h"
#include "Ipad.h"
#include "IPhone13Pro.h"
#include "Enums.h"
#include "AbstractFactory.h"
using namespace std;

class AppleFactory : public AbstractFactory
{
public:
    AppleFactory();

    Product *createProductObject(PRODUCT_APPLE_TYPE type, const string& _productName, const int& _productPrice);
};

#endif // APPLEFACTORY_H
