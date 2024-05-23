// football.cpp
#include "football.h"
#include <iostream>

Football::Football(const std::string& equipe1, const std::string& equipe2) :
    equipe1(equipe1), equipe2(equipe2), score(0), tempsJoue(0) {
    // Initialisation des attributs spécifiques au football ici
}

void Football::start() 
{
    std::cout << "Le match de football commence entre " << equipe1 << " et " << equipe2 << "."<< std::endl;
}

void Football::quit() 
{
    std::cout << "Le match de football est terminé. Le score final est " << score << " - " << score << "." << std::endl;
}

void Football::pause() 
{
    std::cout << "Le match de football est mis en pause. Temps joué : " << tempsJoue << " minutes." << std::endl;
}

void Football::restart() 
{
    std::cout << "Le match de football est relancé. Temps joué depuis le début : " << tempsJoue << " minutes." << std::endl;
}