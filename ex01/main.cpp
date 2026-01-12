/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:04:22 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/11 17:04:25 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NUM_ZOMBIES 10

int main()
{
    std::cout << "=== START HORDES ===" << std::endl;

    Zombie* horde = zombieHorde(NUM_ZOMBIES, "CloneTrooper");
    if (horde == NULL)
    {
        std::cout << "Assignment error" << std::endl;
        return (1);
    }

    std::cout << "\n=== ZOMBIES ANNOUNCE ===" << std::endl;

    for (int i = 0; i < NUM_ZOMBIES; i++)
        horde[i].announce();

    std::cout << "\n=== END HORDES PROTOCOL (DELETE[]) ===" << std::endl;

    delete[] horde;

    std::cout << "\n=== END HORDES ===" << std::endl;
    return (0);
}