#include "SamsungTab.h"

SamsungTab::SamsungTab(const string &_productName, const int &_productPrice)
{
    m_strProductName = _productName;
    m_nProductPrice = _productPrice;
}

void SamsungTab::getProductInformation()
{
    cout << "Product: " << m_strProductName << ", Price: " << m_nProductPrice << ".";
}

