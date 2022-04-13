#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include <iostream>
#include <Product.h>
#include <Enums.h>
using namespace std;

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual Product *createProductObject(PRODUCT_SAMSUNG_TYPE type, const string& _productName, const int& _productPrice);
    virtual Product *createProductObject(PRODUCT_APPLE_TYPE type, const string& _productName, const int& _productPrice);
};

#endif // ABSTRACTFACTORY_H
