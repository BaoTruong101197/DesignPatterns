#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
using namespace std;

class Product
{
public:
    Product();
    virtual ~Product();

    virtual void getProductInformation() = 0;
};

#endif // PRODUCT_H
