#ifndef OBSERVERONE_H
#define OBSERVERONE_H

#include "IOnListener.h"

class ObserverOne : public IOnListener
{
public:
    void updateData(const string& _name, const int& _id) override;
};

#endif // OBSERVERONE_H
