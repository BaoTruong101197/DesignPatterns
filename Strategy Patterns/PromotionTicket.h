#ifndef PROMOTIONTICKET_H
#define PROMOTIONTICKET_H

#include <iostream>

using namespace std;

class PromotionTicket
{
public:
    PromotionTicket();
    virtual ~PromotionTicket();

    virtual void getDiscount();
    virtual double doDiscount(const int& _price);
};

#endif // PROMOTIONTICKET_H
