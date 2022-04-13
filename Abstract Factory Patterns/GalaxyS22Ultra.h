#ifndef GALAXYS22ULTRA_H
#define GALAXYS22ULTRA_H
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class GalaxyS22Ultra : public Product
{
private:
    string m_strProductName;
    int m_nProductPrice;
public:
    GalaxyS22Ultra(const string& _productName, const int& _productPrice);

    void getProductInformation();
};

#endif // GALAXYS22ULTRA_H
