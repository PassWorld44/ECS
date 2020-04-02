#pragma once

#include "ID.h"

class Component
{
private :
	ECS::ID entity;
protected :
	Component(); //disable cration of component in the base class
public:
	ECS::ID entity(); //get entity
};

