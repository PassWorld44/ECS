#include "Component.h"

Component::Component(ECS::ID entity_g) : entity(entity_g)
{
}

ECS::ID Component::get_entity()
//just a getter
{
	return this->entity;
}

