#include "ListComponents.h"

template<class ConcreteComponent>
ListComponents<ConcreteComponent>::ListComponents(size_t size)
{
	this->listComponents.reserve(size);
}

template<class ConcreteComponent>
ConcreteComponent& ListComponents<ConcreteComponent>::create(ECS::ID entity)
{
	ConcreteComponent cp{ entity };
	this->listComponents.push_back(cp);
	return cp;
}

template<class ConcreteComponent>
void ListComponents<ConcreteComponent>::remove(ECS::ID entity)
{
	std::remove_if(this->listComponents.begin, this->listComponents.end(),
		[entity](ConcreteComponent& cp) {return cp.get_entity() == entity; });
}