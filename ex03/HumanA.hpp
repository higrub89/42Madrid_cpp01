/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:40:52 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 22:40:54 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon&     _weapon;

    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack() const;
};

#endif
