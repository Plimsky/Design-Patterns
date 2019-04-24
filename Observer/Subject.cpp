#include "Subject.h"
#include <iostream>

void Subject::AttachObserver(const std::shared_ptr<IObserver>& p_observer)
{
    m_observers.emplace_back(p_observer);
}

void Subject::DetachObserver(const std::shared_ptr<IObserver>& p_observer)
{
    m_observers.remove_if([p_observer](auto p_itemObserver)
    {
        const auto sharedObserver = p_itemObserver.lock();
        if (p_observer && sharedObserver)
            return p_observer == sharedObserver;
        return false;
    });
}

void Subject::Notify(Entity& p_entity, const Event& p_event)
{
    for (auto& observer : m_observers)
        observer.lock()->OnNotify(p_entity, p_event);
}

void Subject::HowManyObservers() const
{
    std::cout << "There is " << m_observers.size() << " observers\n";
}
