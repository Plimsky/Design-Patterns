#pragma once
#include <vector>
#include <memory>
#include "Observer.h"

class Subject
{
public:
    void AttachObserver(const Observer*);
    void DetachObserver(const Observer*);

    void Notify(Entity&, const Event&);

private:
    std::vector<std::weak_ptr<Observer>> m_observers;
};
