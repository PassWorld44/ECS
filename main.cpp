#include <vector>
#include <stdexcept>

#include "ID.h"
#include "Entity.h"


int main() {
    try
    {
        // entities
        Entities entities;
        auto me = entities.create();
        auto you = entities.create();
        entities.print();
        std::vector<ECS::ID> badGuys;
        for (auto i = 0; i < 10; ++i) { badGuys.push_back(entities.create()); }
        entities.print();
        entities.remove(you); // you're killed!!!
        entities.print();
        you = entities.create(); // but you're a survivor
        entities.print();
    }
    catch (const std::exception& e)
    {
        std::cout << "error : " << e.what() << std::endl;
    }
}