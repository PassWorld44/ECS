#pragma once

#include <set>
#include <algorithm>
#include <iostream>

#include "ID.h"

class Entities
{
private:
	std::set<ECS::ID> listID;

public :
	ECS::ID create();
	void print();
	void remove(ECS::ID ent);
};

