/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:40:40 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 22:40:46 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA(){
}

void HumanA::attack() const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl; 
}
