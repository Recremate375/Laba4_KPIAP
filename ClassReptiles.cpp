#include "ClassReptiles.h"

Reptiles::Reptiles()
{
    this->name_ = " ";
    this->type_of_food_ = " ";
    this->number_of_limbs_ = 0;
}

Reptiles::Reptiles(string name, string type_of_food, int number_of_limbs)
{
    this->name_ = name;
    this->type_of_food_ = type_of_food;
    this->number_of_limbs_ = number_of_limbs;
}

void Reptiles::show()
{
    cout << "Name: " << this->name_ << endl;
    cout << "Type of Food: " << this->type_of_food_ << endl;
    cout << "Number of limbs: " << this->number_of_limbs_ << endl;
}

Reptiles::~Reptiles()
{
}
