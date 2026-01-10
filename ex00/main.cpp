#include "Zombie.hpp"

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"

int main() {
    std::cout << GREEN << "=== TEST 1: HEAP ALLOCATION (newZombie) ===" << RESET << std::endl;
    {
        Zombie* heapZombie = newZombie("heapZ");

        if (heapZombie == NULL)
        {
            std::cout << RED << "Error: Memory allocation failed" << RESET << std::endl;
            return 1;
        }
        heapZombie->announce();

        std::cout << YELLOW << "[LOG] calling a delete ..." << RESET << std::endl;
        delete heapZombie;
    }
    std::cout << std::endl;

    std::cout << GREEN << "=== TEST 2: STACK ALLOCATION (randomChump) ===" << RESET << std::endl;
    {
        randomChump("stackZ");
    }
    std::cout << std::endl;

    std::cout << GREEN << "=== TEST 3: MANUAL STACK INSTANCE ===" << RESET << std::endl;
    {
        Zombie stackZombie("manualStackZ");
        stackZombie.announce();

        std::cout << YELLOW << "[LOG] outing of scope test 3..." << RESET << std::endl;
    }
    return (0);
}