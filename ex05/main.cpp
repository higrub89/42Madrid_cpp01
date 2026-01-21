/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:43:28 by rhiguita          #+#    #+#             */
/*   Updated: 2026/01/21 23:43:29 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- TEST 1: DEBUG ---" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\n--- TEST 2: INFO ---" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\n--- TEST 3: WARNING ---" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n--- TEST 4: ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n--- TEST 5: INVALID LEVEL ---" << std::endl;
    harl.complain("FATAL_CRASH"); // No debería explotar, solo ignorar o mostrar error

    return 0;
}
