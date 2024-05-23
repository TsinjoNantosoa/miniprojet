#include "strategie.h"
#include <iostream>

Strategie::Strategie() : choixStrategie("") 
{
    // Initialisation des attributs spécifiques à un jeu de stratégie ici
    // on pourrait initialiser le choix de stratégie à une valeur par défaut
    // ou demander à l'utilisateur de saisir son choix via la console.
    // nous utilisons simplement une chaîne vide comme valeur par défaut.
    std::cout << "Bienvenue dans le jeu de stratégie Choisissez votre stratégie (par exemple, 'Attaque', 'Défense') : ";
    std::getline(std::cin, choixStrategie);
    std::cout << "Votre stratégie choisie est : " << choixStrategie << std::endl;
}

void Strategie::start() 
{
    std::cout << "Le jeu de stratégie commence. Vous avez choisi la stratégie : " << choixStrategie << std::endl;
}

void Strategie::quit() 
{
    std::cout << "Le jeu de stratégie est terminé. Votre stratégie choisie était : " << choixStrategie << std::endl;
}

void Strategie::pause() 
{
    std::cout << "Le jeu de stratégie est mis en pause. Votre stratégie choisie était : " << choixStrategie << std::endl;
}

void Strategie::restart() 
{
    std::cout << "Le jeu de stratégie est relancé. Votre stratégie choisie était : " << choixStrategie << std::endl;
}

void Strategie::choisirStrategie(const std::string& strategie) 
{
    choixStrategie = strategie;
    std::cout << "Votre stratégie choisie est : " << choixStrategie << std::endl;
}