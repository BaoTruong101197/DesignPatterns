#include "GalaxyS22Ultra.h"

GalaxyS22Ultra::GalaxyS22Ultra(const string &_productName, const int &_productPrice)
{
    m_strProductName = _productName;
    m_nProductPrice = _productPrice;
}

void GalaxyS22Ultra::getProductInformation()
{
    cout << "Product: " << m_strProductName << ", Price: " << m_nProductPrice << ".";
}
