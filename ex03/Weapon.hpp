/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:53:26 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/14 21:21:19 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon {
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();

    const std::string& getType() const;
    void setType(std::string newType);
};

#endif
