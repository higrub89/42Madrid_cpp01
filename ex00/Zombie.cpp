#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(){
    std::cout << "Debug: Zombie " << this->_name << " has been destroyed (Memory free) " << std::endl;
}

void Zombie::announce(void) const{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}