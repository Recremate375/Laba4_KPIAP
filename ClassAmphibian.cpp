#include "ClassAmphibian.h"

Amphibian::Amphibian()
{
    this->name_ = " ";
    this->color_ = " ";
    this->breathing_type_ = " ";
}

Amphibian::Amphibian(string name, string color, string breathing_type)
{
    this->name_ = name;
    this->color_ = color;
    this->breathing_type_ = breathing_type;
}

void Amphibian::show()
{
    cout << "Name: " << this->name_ <<endl;
    cout << "Color: " << this->color_ << endl;
    cout << "Breathing type: " << this->breathing_type_ << endl;
}

Amphibian::~Amphibian()
{
}
