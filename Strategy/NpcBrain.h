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
        AFFRAID
    };

    NpcBrain(const BehaviourType&);

    void GetAttacked() noexcept;
    void Attack(const Entity&) noexcept;

    void SwitchBehaviour(const BehaviourType&) noexcept;

private:
    BehaviourType m_type;
    std::unique_ptr<Behaviour> m_behaviour;
};
