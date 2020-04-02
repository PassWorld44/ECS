#include "Component.h"

Component::Component()
{
}

ECS::ID Component::entity()
//just a getter
{
	return this->entity;
}
