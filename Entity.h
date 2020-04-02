#pragma once

#include <set>
#include <algorithm>

#include "ID.h"

class Entities
{
private:
	std::set<ECS::ID> listID;

public :
	ECS::ID getID();
		
};

