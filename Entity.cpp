#include "Entity.h"

ECS::ID Entities::getID()
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
	}
}
