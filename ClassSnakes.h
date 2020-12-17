#pragma once
#include "ClassReptiles.h"
#include "ClassAmphibian.h"

class Snakes : public Reptiles,virtual public Amphibian
{
private:
    string name_;
    string poison_;
public:
    Snakes();
    Snakes(string, string, string, string, string, int);
    void show();
    ~Snakes();
};