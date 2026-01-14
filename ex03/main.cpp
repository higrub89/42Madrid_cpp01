#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        std::cout << "--- TEST HUMAN A (REF) ---" << std::endl;
        Weapon club = Weapon("crude spiked club");
        
        // HumanA nace armado. Si intentas pasar NULL, no compila. Safety First.
        HumanA bob("Bob", club);
        bob.attack();
        
        // Al cambiar el arma original, HumanA ve el cambio inmediatamente (es una Referencia)
        club.setType("some other type of club");
        bob.attack();
    }
    std::cout << std::endl;
    {
        std::cout << "--- TEST HUMAN B (PTR) ---" << std::endl;
        Weapon club = Weapon("crude spiked club");
        
        // HumanB nace desarmado
        HumanB jim("Jim");
        
        // Si atacara aquí, nuestro if(NULL) lo protegería.
        // jim.attack(); 

        // Le asignamos arma
        jim.setWeapon(club);
        jim.attack();
        
        // Cambiamos el tipo del arma compartida
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}