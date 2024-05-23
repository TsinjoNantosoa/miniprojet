#ifndef STRATEGIE_H
#define STRATEGIE_H

#include "jeu.h"
#include <string>

class Strategie : public Jeu 
{
public:
    Strategie(); 

    // Surcharge des méthodes de la classe parente
    void start() override;
    void quit() override;
    void pause() override;
    void restart() override;

    // Méthode pour choisir une stratégie
    void choisirStrategie(const std::string& strategie);
    private:
    std::string choixStrategie;
};

#endif 