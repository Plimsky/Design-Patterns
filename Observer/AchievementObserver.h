#pragma once
#include "IObserver.h"

enum class AchievementType
{
    ACHIEVEMENT_FELL_OFF_BRIDGE
};

class AchievementObserver : public  IObserver
{
public:
    void OnNotify(Entity& p_entity, const Event& p_event) override;

private:
    void Unlock(const AchievementType& p_achievement) const;
};
