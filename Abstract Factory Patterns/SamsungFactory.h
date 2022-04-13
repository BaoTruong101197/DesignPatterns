#ifndef SAMSUNGFACTORY_H
#define SAMSUNGFACTORY_H
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "GalaxyS22Ultra.h"
#include "SamsungTab.h"
#include "Enums.h"
#include "AbstractFactory.h"
using namespace std;

class SamsungFactory : public AbstractFactory
{
public:
    SamsungFactory();

    Product *createProductObject(PRODUCT_SAMSUNG_TYPE type, const string& _productName, const int& _productPrice);
};

#endif // SAMSUNGFACTORY_H
