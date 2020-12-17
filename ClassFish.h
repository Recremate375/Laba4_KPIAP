#pragma once
#include "ClassAnimal.h"

class Fish : public Animal
{
protected:
    string color_;
public:
    Fish();
    Fish(string, string);
    void show();
    ~Fish();
};
