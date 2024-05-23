// football.h
#ifndef FOOTBALL_H
#define FOOTBALL_H
#include<string>

#include "jeu.h"

class Football : public Jeu 
{
public:
    Football(const std::string& equipe1, const std::string& equipe2); // Constructeur avec les noms des équipes

    // Surcharge des méthodes de la classe parente
    void start() override;
    void quit() override;
    void pause() override;
    void restart() override;

    // Accesseurs pour les attributs spécifiques au football
    const std::string& getEquipe1() const { return equipe1; }
    const std::string& getEquipe2() const { return equipe2; }
    int getScore() const { return score; }
    int getTempsJoue() const { return tempsJoue; }
private:
    std::string equipe1;
    std::string equipe2;
    int score;
    int tempsJoue;
};
#endif 