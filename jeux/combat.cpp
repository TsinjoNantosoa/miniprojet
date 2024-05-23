// combat.cpp
#include "combat.h"
#include <iostream>

Combat::Combat(const std::string& nomCombattant1, const std::string& nomCombattant2)
    : nomCombattant1(nomCombattant1), nomCombattant2(nomCombattant2),
      forceCombattant1(100), forceCombattant2(100),
      vieCombattant1(100), vieCombattant2(100) 
      {
    // Initialisation des attributs spécifiques au combat ici
    std::cout << "Un combat entre " << nomCombattant1 << " et " << nomCombattant2 << " commence." << std::endl;
}

void Combat::start() 
{
    std::cout << "Le combat commence. " << nomCombattant1 << " attaque " << nomCombattant2 << "!" << std::endl;
}

void Combat::quit() 
{
    std::cout << "Le combat est terminé. " << nomCombattant1 << " a gagné contre " << nomCombattant2 << "." << std::endl;
}

void Combat::pause() 
{
    std::cout << "Le combat est mis en pause. " << nomCombattant1 << " a " << vieCombattant1 << " points de vie restants, tandis que " << nomCombattant2 << " a " << vieCombattant2 << " points de vie restants." << std::endl;
}

void Combat::restart() 
{
    std::cout << "Le combat est relancé. " << nomCombattant1 << " a " << vieCombattant1 << "points de vie restants, tandis que " << nomCombattant2 << " a " << vieCombattant2 << " points de vie restants." << std::endl;
}
 