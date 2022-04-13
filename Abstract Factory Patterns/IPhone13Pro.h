#ifndef IPHONE13PRO_H
#define IPHONE13PRO_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class IPhone13Pro : public Product
{
private:
    string m_strProductName;
    int m_nProductPrice;
public:
    IPhone13Pro(const string& _productName, const int& _productPrice);

    void getProductInformation();
};

#endif // IPHONE13PRO_H
