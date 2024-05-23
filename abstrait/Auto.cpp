#include "Auto.h"
#include <iostream>
Auto::Auto(const std::string& marque) : Vehicule(marque) 
{
    
}
void Auto::conduire() const {
    std::cout << "Conduire une auto..." << std::endl;
} 
