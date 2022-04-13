#include "AppleFactory.h"

AppleFactory::AppleFactory()
{

}

Product *AppleFactory::createProductObject(PRODUCT_APPLE_TYPE type, const string &_productName, const int &_productPrice)
{
    switch(type) {
    case PRODUCT_IPAD:
        return new Ipad(_productName, _productPrice);
    case PRODUCT_IPHONE:
        return new IPhone13Pro(_productName, _productPrice);
    }
}
