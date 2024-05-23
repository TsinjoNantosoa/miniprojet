#ifndef JEU_H
#define JEU_H

class Jeu 
{
public:
    virtual ~Jeu() = default; // Destructeur virtuel par défaut

    virtual void start() = 0; // Méthode pure virtuelle pour démarrer le jeu
    virtual void quit() = 0; // Méthode pure virtuelle pour quitter le jeu
    virtual void pause() = 0; // Méthode pure virtuelle pour mettre le jeu en pause
    virtual void restart() = 0; // Méthode pure virtuelle pour reprendre le jeu après une pause ou une interruption
};

#endif 