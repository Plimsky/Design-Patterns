#include "NpcBrain.h"
#include "NeutralBehaviour.h"
#include "AggressiveBehaviour.h"
#include "AfraidBehaviour.h"

NpcBrain::NpcBrain(const BehaviourType& p_type) : m_type{p_type}
{
    SwitchBehaviour(p_type);
    std::cout << '\n';
}

void NpcBrain::GetAttacked() noexcept
{
    std::cout << "Getting attacked : ";
    SwitchBehaviour(BehaviourType::AFRAID);
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

    case BehaviourType::AFRAID:
        m_behaviour = std::make_unique<AfraidBehaviour>();
        break;

    default:
        break;
    }
}
