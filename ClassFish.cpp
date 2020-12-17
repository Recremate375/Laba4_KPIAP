#include "ClassFish.h"

Fish::Fish()
{
    this->name_ = " ";
    this->color_ = " ";
}

Fish::Fish(string name, string color)
{
    this->name_ = name;
    this->color_ = color;
}

void Fish::show()
{
    cout << "Name: " << this->name_ << endl;
    cout << "Color: " << this->color_ << endl;
}

Fish::~Fish()
{
}
