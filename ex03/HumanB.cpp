#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weapon) {
    // Guardamos la dirección de la referencia
    this->_weapon = &weapon;
}

void HumanB::attack() const {
    // Verificación de seguridad antes de usar el arma
    if (this->_weapon != NULL) {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    } else {
        std::cout << this->_name << " attacks with their bare hands" << std::endl;
    }
}