#include "IPhone13Pro.h"

IPhone13Pro::IPhone13Pro(const string &_productName, const int &_productPrice)
{
    m_strProductName = _productName;
    m_nProductPrice = _productPrice;
}

void IPhone13Pro::getProductInformation()
{
    cout << "Product: " << m_strProductName << ", Price: " << m_nProductPrice << ".";
}

