#include "NoDiscountTicket.h"


void NoDiscountTicket::getDiscount()
{
    cout << "No discount in this ticket";
}

double NoDiscountTicket::doDiscount(const int& _price)
{
    return _price;
}
