#pragma once
#include <list>
#include <memory>
#include "Observer.h"

class Subject
{
public:
    void AttachObserver(const std::shared_ptr<Observer>&);
    void DetachObserver(const std::shared_ptr<Observer>&);
    void Notify(Entity&, const Event&);
    void HowManyObservers() const;

private:
    std::list<std::weak_ptr<Observer>> m_observers;
};
