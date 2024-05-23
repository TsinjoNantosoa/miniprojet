#include <iostream>
#include "Auto.h"
#include "Moto.h"

int main()
 {
    // Création d'un objet Auto
    Auto mauto("Toyota");
    mauto.conduire();

    // Création d'un objet Moto
    Moto mmoto("Honda");
    mmoto.conduire();

    return 0;
}
