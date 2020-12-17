#include <iostream>

#include "ClassSnakes.h"

int main()
{
    Snakes Snake1("cobra", "green", "predator", "poisonous", "legs", 0);
    Snake1.show();
    string name, color, poison, type_of_food, breathing_type;
    int number_of_limbs;
    cout << "Enter the name of your animal" << endl;
    cin >> name;
    Animal Animal1(name);
    Animal1.show();
    name = " ";
    cout << "Enter the name of your Mammals" << endl;
    cin >> name;
    cout << "Enter the type_of_food" << endl;
    cin >> type_of_food;
    Mammals Mammal1(name, type_of_food);
    Mammal1.show();
    name = " ";
    type_of_food = " ";
    cout << "Enter the name of fish" << endl;
    cin >> name;
    cout << "Enter the color" << endl;
    cin >> color;
    Fish fish1(name, color);
    fish1.show();
    name = " ";
    color = " ";
    cout << "Enter the name of Reptile" << endl;
    cin >> name;
    cout << "Enter the type_of_food" << endl;
    cin >> type_of_food;
    cout << "Enter the number of limbs: " << endl;
    cin >> number_of_limbs;
    Reptiles Reptile1(name, type_of_food, number_of_limbs);
    Reptile1.show();
    name = " ";
    type_of_food = " ";
    number_of_limbs = 0;
    cout << "Enter the name of Amphibia: " << endl;
    cin >> name;
    cout << "Enter the color: " << endl;
    cin >> color;
    cout << "Enter the breathing type: " << endl;
    cin >> breathing_type;
    Amphibian Amphibia(name, color, breathing_type);
    Amphibia.show();
    cout << "Enter the name of Snake: " << endl;
    cin >> name;
    cout << "Enter the color: " << endl;
    cin >> color;
    cout << "Enter the breathing type: " << endl;
    cin >> breathing_type;
    cout << "Enter the type of food" << endl;
    cin >> type_of_food;
    cout << "Enter the Num of limbs" << endl;
    cin >> number_of_limbs;
    cout << "Enter the poison:" << endl;
    cin >> poison;
    Snakes Snake(name, color, type_of_food, poison, breathing_type, number_of_limbs);
    Snake.show();
}

