#include "AchievementObserver.h"

#include <iostream>

#include "Player.h"

void AchievementObserver::OnNotify(Entity& p_entity, const Event& p_event)
{
    auto* player = dynamic_cast<Player*>(&p_entity);

    switch (p_event)
    {
    case Event::ENTITY_FELL:
        if (player != nullptr && player->IsOnBridge())
            Unlock(AchievementType::ACHIEVEMENT_FELL_OFF_BRIDGE);
        break;
    default:
        break;
    }
}

void AchievementObserver::Unlock(const AchievementType& p_achievement) const
{
    std::cout << "Achievement unlocked : " << static_cast<int>(p_achievement) << '\n';
}
