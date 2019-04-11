#include "NpcBrain.h"
#include "NeutralBehaviour.h"
#include "AggressiveBehaviour.h"
#include "AffraidBehaviour.h"

NpcBrain::NpcBrain(const BehaviourType& p_type) : m_type{p_type}
{
    SwitchBehaviour(p_type);
    std::cout << '\n';
}

void NpcBrain::GetAttacked() noexcept
{
    std::cout << "Getting attacked : ";
    SwitchBehaviour(BehaviourType::AFFRAID);
    m_behaviour->Dodge();
    std::cout << '\n';
}

void NpcBrain::Attack(const Entity& p_target) noexcept
{
    std::cout << "Attacking : ";
    SwitchBehaviour(BehaviourType::AGGRESSIVE);
    m_behaviour->Attack(p_target);
    std::cout << '\n';
}

void NpcBrain::SwitchBehaviour(const BehaviourType& p_type) noexcept
{
    switch (p_type)
    {
    case BehaviourType::NEUTRAL:
        m_behaviour = std::make_unique<NeutralBehaviour>();
        break;

    case BehaviourType::AGGRESSIVE:
        m_behaviour = std::make_unique<AggressiveBehaviour>();
        break;

    case BehaviourType::AFFRAID:
        m_behaviour = std::make_unique<AffraidBehaviour>();
        break;

    default:
        break;
    }
}
