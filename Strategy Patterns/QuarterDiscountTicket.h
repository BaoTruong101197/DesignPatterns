#ifndef QUARTERDISCOUNTTICKET_H
#define QUARTERDISCOUNTTICKET_H

#include "PromotionTicket.h"

class QuarterDiscountTicket : public PromotionTicket
{
public:
    void getDiscount() override;
    double doDiscount(const int& _price) override;
};

#endif // QUARTERDISCOUNTTICKET_H
