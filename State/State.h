#pragma once
#include <list>

class Character;
class State;
class Transition
{
public:
    bool ComputeCondition();
    State* GetState();
};

class State
{
protected:
    Character* m_character;
    std::list<Transition*> m_transitions;

public:
    State(Character* p_char) : m_character(p_char) {}
    void AddTransition(Transition* transition);

    State* ComputeTransition() {
        for (auto* transition: m_transitions) {
            if (transition->ComputeCondition()) 
				return transition->GetState();
        }
        return this;
    }
    
    virtual void Enter();
    virtual State* Update();
    virtual void Exit();
};