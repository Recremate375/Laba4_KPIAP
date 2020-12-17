#include "ClassSnakes.h"

Snakes::Snakes()
{
    this->name_ = " ";
    this->breathing_type_ = " ";
    this->color_ = " ";
    this->poison_ = " ";
    this->type_of_food_ = " ";
    this->number_of_limbs_ = 0;
}

Snakes::Snakes(string name, string color, string type_of_food, string poison, string breathing_type, int number)
{
    this->name_ = name;
    this->color_ = color;
    this->type_of_food_ = type_of_food;
    this->poison_ = poison;
    this->breathing_type_ = breathing_type;
    this->number_of_limbs_ = number;
}

void Snakes::show()
{
    cout << "Name: " << this->name_ << endl;
    cout << "Type of breatihg: " << this->breathing_type_ << endl;
    cout << "Type_of_food: " << this->type_of_food_ << endl;
    cout << "color: " << this->color_ << endl;
    cout << "Poison: " << this->poison_ << endl;
    cout << "Number of limbs: " << this->number_of_limbs_ << endl;
}

Snakes::~Snakes()
{
}
