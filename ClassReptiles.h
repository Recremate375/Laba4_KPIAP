#pragma once
#include "ClassMammals.h"

class Reptiles : public Mammals
{
protected:
    int number_of_limbs_;
public:
    Reptiles();
    Reptiles(string, string, int);
    void show();
    ~Reptiles();
};
