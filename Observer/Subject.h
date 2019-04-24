#pragma once
#include <list>
#include <memory>

#include "IObserver.h"

class Subject
{
public:
    void AttachObserver(const std::shared_ptr<IObserver>& p_observer);
    void DetachObserver(const std::shared_ptr<IObserver>& p_observer);
    void Notify(Entity& p_entity, const Event& p_event);
    void HowManyObservers() const;

private:
    std::list<std::weak_ptr<IObserver>> m_observers;
};
