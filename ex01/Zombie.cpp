/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:04:11 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/11 17:04:13 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    this->_name = "(Unidentified Subject)";
}

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie(){
    std::cout << "Debug: Zombie " << this->_name << " has been destroyed ." << std::endl;
}

void Zombie::announce(void) const{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}