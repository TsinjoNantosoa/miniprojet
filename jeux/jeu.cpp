#include "jeu.h"
#include <iostream>

void Jeu::start() 
{
    std::cout << "Le jeu commence!" << std::endl;
}

void Jeu::quit() 
{
    std::cout << "Le jeu est terminé." << std::endl;
}

void Jeu::pause() 
{
    std::cout << "Le jeu est mis en pause." << std::endl;
}
void Jeu::restart() 
{
    std::cout << "Le jeu est relancé." << std::endl;
}
