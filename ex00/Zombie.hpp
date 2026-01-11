/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:04:41 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/11 17:04:43 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
    private :
        std::string _name;
    public :
        explicit Zombie(std::string name);
        ~Zombie();

        void    announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
