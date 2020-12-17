#pragma once
#include "ClassFish.h"

class Amphibian : public Fish
{
protected:
    string breathing_type_;
public:
    Amphibian();
    Amphibian(string, string, string);
    void show();
    ~Amphibian();
};