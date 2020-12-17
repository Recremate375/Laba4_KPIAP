#include "ClassMammals.h"

Mammals::Mammals()
{
    this->name_ = " ";
    this->type_of_food_ = "";
}

Mammals::Mammals(string name, string type_of_food)
{
    this->name_ = name;
    this->type_of_food_ = type_of_food;
}

void Mammals::show()
{
    cout << "Name: " << this->name_ << endl;
    cout << "Type of Food: " << this->type_of_food_ << endl;
}

Mammals::~Mammals()
{
}
