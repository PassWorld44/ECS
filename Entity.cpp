#include "Entity.h"

ECS::ID Entities::create()
///
{
	std::set<ECS::ID>::iterator it = std::adjacent_find(this->listID.begin(), this->listID.end(),
		[](ECS::ID lh, ECS::ID rh) //because the set is sorted
		{
			return lh + 1 != rh;
		});

	if(it != this->listID.end())
	{
		this->listID.insert((*it) + 1); //because that's the missing value
		return (*it) + 1;
	}
	else
	{
		this->listID.insert(this->listID.size());
		return this->listID.size() - 1;
	}
}

void Entities::print()
{
	for (std::set<ECS::ID>::iterator it = this->listID.begin(); it != this->listID.end(); it++)
	{
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}

void Entities::remove(ECS::ID ent)
{
	this->listID.erase(ent);
}
