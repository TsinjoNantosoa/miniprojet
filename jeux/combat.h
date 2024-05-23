#ifndef COMBAT_H
#define COMBAT_H

#include "jeu.h"
#include <string>

class Combat : public Jeu 
{
public:
    Combat(const std::string& nomCombattant1, const std::string& nomCombattant2); // Constructeur avec les noms des combattants

    // Surcharge des méthodes de la classe parente
    void start() override;
    void quit() override;
    void pause() override;
    void restart() override;

    // Accesseurs pour les attributs spécifiques au combat
    const std::string& getNomCombattant1() const { return nomCombattant1; }
     const std::string& getNomCombattant2() const { return nomCombattant2; }

private:
    std::string nomCombattant1;
    std::string nomCombattant2;
    int forceCombattant1;
    int forceCombattant2;
    int vieCombattant1;
    int vieCombattant2;
};

#endif 
