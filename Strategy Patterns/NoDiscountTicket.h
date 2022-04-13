#ifndef NODISCOUNTTICKET_H
#define NODISCOUNTTICKET_H

#include "PromotionTicket.h"

class NoDiscountTicket : public PromotionTicket
{
public:
    void getDiscount() override;
    double doDiscount(const int& _price) override;
};

#endif // NODISCOUNTTICKET_H
