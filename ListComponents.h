#pragma once

#include <vector>
#include <algorithm>

#include "Entity.h"
//#include "Component.h"

template<class ConcreteComponent>
class ListComponents
{
private:
	std::vector<ConcreteComponent> listComponents;
public:
	ListComponents(size_t size = 1000);
	ConcreteComponent& create(ECS::ID entity);
	void remove(ECS::ID entity);
};


