#ifndef SAMSUNGTAB_H
#define SAMSUNGTAB_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class SamsungTab : public Product
{
private:
    string m_strProductName;
    int m_nProductPrice;
public:
    SamsungTab(const string& _productName, const int& _productPrice);

    void getProductInformation();
};

#endif // SAMSUNGTAB_H
