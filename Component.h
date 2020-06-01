#pragma once

#include "ID.h"

class Component
{
private :
	ECS::ID entity;
protected :
	Component(ECS::ID entity); //disable cration of component in the base class
public:
	ECS::ID get_entity(); //get entity
};

struct PositionComponent : public Component {
    int x{};
    int y{};
};

struct StateComponent : public Component {
    enum class State { Waiting, Walking, Running, Dead };
    State state{ State::Waiting };
};

