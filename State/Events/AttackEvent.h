#pragma once
#include "../Player.h"
#include "../States/IdleState.h"
#include "../States/JumpState.h"
#include "../States/AttackState.h"

class AttackEvent
{
public:
	StatePlayer operator()(const IdleState&) const;
	StatePlayer operator()(const JumpState&) const;
	StatePlayer operator()(const AttackState&) const;
};
