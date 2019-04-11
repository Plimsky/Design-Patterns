#include "NpcBrain.h"

int main()
{
    const Entity randomGuy{};
    NpcBrain brain{NpcBrain::BehaviourType::NEUTRAL};

    brain.GetAttacked();
    brain.Attack(randomGuy);
	return 0;
}
