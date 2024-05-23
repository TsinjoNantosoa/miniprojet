#ifndef Moto_H
#define Moto_H

#include "Vehicule.h"

class Moto : public Vehicule 
{
public:
    Moto(const std::string& marque);
    void conduire() const override;
};

#endif 