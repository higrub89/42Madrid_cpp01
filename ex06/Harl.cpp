#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

// --- Implementación de los niveles de queja ---
// Textos extraídos directamente del manual técnico (Subject)

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // 1. Array de Punteros a Funciones Miembro
    // Sintaxis: TipoReturn (NombreClase::*NombreArray[])(Argumentos)
    void (Harl::*ptr_complain[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // 2. Array de claves (Strings)
    std::string levels[] = {
        "DEBUG", 
        "INFO", 
        "WARNING", 
        "ERROR"
    };

    // 3. Búsqueda y Ejecución (Dispatch)
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            // Invocación del puntero: (this->*puntero)()
            (this->*ptr_complain[i])();
            return;
        }
    }
    std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
}