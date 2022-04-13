#ifndef IPAD_H
#define IPAD_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Ipad : public Product
{
private:
    string m_strProductName;
    int m_nProductPrice;
public:
    Ipad(const string& _productName, const int& _productPrice);

    void getProductInformation();
};

#endif // IPAD_H
