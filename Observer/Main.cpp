#include "Player.h"
#include "AchievementObserver.h"

int main()
{
    const auto achievementObserver1 = std::make_shared<AchievementObserver>();
    const auto achievementObserver2 = std::make_shared<AchievementObserver>();
    Player p1{};

    p1.AttachObserver(achievementObserver1);
    p1.NotifyOnFall();
    p1.HowManyObservers();
    
    p1.AttachObserver(achievementObserver2);
    
    p1.HowManyObservers();
    p1.NotifyOnFall();

    p1.DetachObserver(achievementObserver2);
    p1.DetachObserver(achievementObserver1);
    p1.HowManyObservers();

    return 0;
}
