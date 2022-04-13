#ifndef HALFDISCOUNTTICKET_H
#define HALFDISCOUNTTICKET_H

#include "PromotionTicket.h"

class HalfDiscountTicket : public PromotionTicket
{
public:
    void getDiscount() override;
    double doDiscount(const int& _price) override;
};

#endif // HALFDISCOUNTTICKET_H
