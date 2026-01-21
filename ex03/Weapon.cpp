/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:42:47 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 22:42:48 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType() const {
    return this->_type;
}

void Weapon::setType(std::string newType){
    this->_type = newType;
}
