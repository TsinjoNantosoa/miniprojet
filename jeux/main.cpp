#include <iostream>
#include "jeu.h" 
#include "football.h"
#include "combat.h"
#include "strategie.h"

int main() {
    // Instanciation des objets de chaque type de jeu
    Football football("Equipe A", "Equipe B"); 
    Combat combat("Combattant 1", "Combattant 2"); 
    Strategie strategie; // Pas besoin de passer de paramètres ici car la stratégie est choisie au début

    // Appel des méthodes pour chaque type de jeu
    std::cout << "Football:" << std::endl;
    football.start();
    football.pause();
    football.restart();
    football.quit();

    std::cout << "\nCombat:" << std::endl;
    combat.start();
    combat.pause();
    combat.restart();
    combat.quit();

    std::cout << "\nStratégie:" << std::endl;
    strategie.start();
    strategie.pause();
    strategie.restart();
    strategie.quit();

    return 0;
}