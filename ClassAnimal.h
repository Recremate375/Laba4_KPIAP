#pragma once
#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:
    string name_;
public:
    Animal();
    Animal(string);
    string get_name();
    void set_name(string);
    void show();
    ~Animal();
};