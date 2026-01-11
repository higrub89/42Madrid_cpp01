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
        Zombie();
        
        Zombie(std::string name);
        
        ~Zombie();

        void    announce(void) const;

        void    setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
