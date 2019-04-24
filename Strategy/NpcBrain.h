#pragma once
#include <memory>

#include "Behaviour.h"

class NpcBrain
{
public:
    enum class BehaviourType
    {
        NEUTRAL,
        AGGRESSIVE,
        AFRAID
    };

    NpcBrain(const BehaviourType&);

    void GetAttacked() noexcept;
    void Attack(const Entity& p_target) noexcept;

    void SwitchBehaviour(const BehaviourType& p_type) noexcept;

private:
    BehaviourType m_type;
    std::unique_ptr<Behaviour> m_behaviour;
};
