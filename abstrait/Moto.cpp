#include "Moto.h"
#include <iostream>
Moto::Moto(const std::string& marque) : Vehicule(marque) 
{

}
void Moto::conduire() const 
{
    std::cout << "Conduire une moto..." << std::endl;
}
