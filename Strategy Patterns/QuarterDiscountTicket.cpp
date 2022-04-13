#include "QuarterDiscountTicket.h"

void QuarterDiscountTicket::getDiscount()
{
    cout << "Discount 25% in this ticket";
}

double QuarterDiscountTicket::doDiscount(const int& _price)
{
    return _price * 0.75;
}
