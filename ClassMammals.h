#pragma once
#include "ClassAnimal.h"

class Mammals : public Animal
{
protected:
    string type_of_food_;
public:
    Mammals();
    Mammals(string, string);
    void show();
    ~Mammals();
};