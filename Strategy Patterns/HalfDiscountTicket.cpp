#include "HalfDiscountTicket.h"

void HalfDiscountTicket::getDiscount()
{
    cout << "Discount 50% in this ticket";
}

double HalfDiscountTicket::doDiscount(const int& _price)
{
    return _price * 0.5;
}
