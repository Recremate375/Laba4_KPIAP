#include "ClassAnimal.h"

Animal::Animal()
{
    this->name_ = " ";
}

Animal::Animal(string name)
{
    this->name_ = name;
}

string Animal::get_name()
{
    return this->name_;
}

void Animal::set_name(string name)
{
    this->name_ = name;
}

void Animal::show()
{
    cout << "Name: " << this->name_ << endl;
}

Animal::~Animal()
{
}

