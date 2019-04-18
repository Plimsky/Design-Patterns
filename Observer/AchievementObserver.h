#pragma once
#include "Observer.h"

enum class AchievementType
{
    ACHIEVEMENT_FELL_OFF_BRIDGE
};

class AchievementObserver : public  Observer
{
public:
    void OnNotify(Entity& p_entity, const Event&) override;

private:
    void Unlock(const AchievementType& p_achievement) const;
};
