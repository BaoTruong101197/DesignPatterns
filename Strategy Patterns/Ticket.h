#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include <string>
#include "PromotionTicket.h"

using namespace std;

class Ticket
{
public:
    Ticket();

    void setName(const string& _name);
    string getName();

    void setPromotionTicket(PromotionTicket* _promotionTicket);
    void getPromotionTicket();

    void setPrice(const int& _price);
    double getPrice();

private:
    string m_strName {""};
    double m_nPrice {0};
    PromotionTicket * m_pPromotionTicket {nullptr};
};

#endif // TICKET_H
