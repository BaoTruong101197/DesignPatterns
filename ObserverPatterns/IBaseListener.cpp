#include "IBaseListener.h"

IBaseListener::IBaseListener()
{

}

void IBaseListener::registerListener(IOnListener *_iOnListener)
{
    m_vIOnListener.push_back(_iOnListener);
}

void IBaseListener::unRegisterListener(IOnListener *_iOnListener)
{
    for (unsigned int i = 0; i < m_vIOnListener.size(); i++) {
        if (_iOnListener == m_vIOnListener.at(i)) {
            m_vIOnListener.erase(m_vIOnListener.begin() + i, m_vIOnListener.begin() + i + 1);
        }
    }
}

void IBaseListener::notifyObservers(const string &_name, const int &_id)
{
    for (auto s : m_vIOnListener) {
        s->updateData(_name, _id);
    }
}
