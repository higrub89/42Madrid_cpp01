/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:37:41 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 22:37:43 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

int main()
{
    std::string brain = "Hi THIS IS BRAIN";
    
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "=== ANALIZED MEMORY ADDRESS ===" << std::endl;

    std::cout << "Memory address of the string: " << CYAN << &brain << RESET << std::endl;
    std::cout << "Memory address held by stringPTR: " << CYAN << stringPTR << RESET << std::endl;
    std::cout << "Memory address held by stringREF: " << CYAN << &stringREF << RESET << std::endl;

    std::cout << std::endl;

    std::cout << "=== ANALIZED CONTENT ===" << std::endl;

    std::cout << "Value of brain:       " << YELLOW << brain << RESET << std::endl;
    std::cout << "Value pointer (*ptr): " << YELLOW << *stringPTR << RESET << std::endl;
    std::cout << "Value ref (ref):      " << YELLOW << stringREF << RESET << std::endl;

    return (0);
}
