#include "SamsungFactory.h"

SamsungFactory::SamsungFactory()
{

}

Product *SamsungFactory::createProductObject(PRODUCT_SAMSUNG_TYPE type, const string &_productName, const int &_productPrice)
{
    switch(type) {
    case PRODUCT_GALAXYS22:
        return new GalaxyS22Ultra(_productName, _productPrice);
    case PRODUCT_SAMSUNGTAB:
        return new SamsungTab(_productName, _productPrice);
    }
}
