#include <iostream>
#include "PlainTicket.h"
#include "PromotionTicket.h"
#include "HalfDiscountTicket.h"
#include "NoDiscountTicket.h"
#include "QuarterDiscountTicket.h"

using namespace std;

int main()
{
    Ticket * m_pPlainTicket = new PlainTicket();
    m_pPlainTicket->setName("Plain ticket");
    m_pPlainTicket->setPrice(100);
    m_pPlainTicket->setPromotionTicket(new QuarterDiscountTicket());
    cout << m_pPlainTicket->getName() << endl;
    m_pPlainTicket->getPromotionTicket();
    cout << endl;
    cout << "Price: " << m_pPlainTicket->getPrice() << endl;
}
