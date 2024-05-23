#ifndef VEhicule_H
#define VEhicule_H

#include <string>

class Vehicule 
{
public:
    Vehicule(const std::string& marque);
    virtual void conduire() const = 0;

protected:
    std::string marque;
};
#endif 

