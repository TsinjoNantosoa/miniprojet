#ifndef Auto_H
#define Auto_H

#include "Vehicule.h"

class Auto : public Vehicule 
{
public:
    Auto(const std::string& marque);
    void conduire() const override;
};

#endif 
