#include "Subject.h"

void Subject::AttachObserver(const Observer* p_observer)
{
    
}
void Subject::DetachObserver(const Observer* p_observer) {}
void Subject::Notify(Entity& p_entity, const Event& p_event)
{
    for(auto& observer: m_observers)
        observer.lock()->OnNotify(p_entity, p_event);
}
