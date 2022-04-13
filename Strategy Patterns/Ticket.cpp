#include "Ticket.h"

Ticket::Ticket()
{

}

void Ticket::setName(const string &_name)
{
    m_strName = _name;
}

string Ticket::getName()
{
    return m_strName;
}

void Ticket::setPromotionTicket(PromotionTicket *_promotionTicket)
{
    m_pPromotionTicket = _promotionTicket;
}

void Ticket::getPromotionTicket()
{
    m_pPromotionTicket->getDiscount();
}

void Ticket::setPrice(const int &_price)
{
    m_nPrice = _price;
}

double Ticket::getPrice()
{
    return m_pPromotionTicket->doDiscount(m_nPrice);
}
