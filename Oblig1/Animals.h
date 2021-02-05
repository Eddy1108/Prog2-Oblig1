#pragma once
#include <string>
class Animals
{
public:

    Animals();
    Animals(std::string _name, std::string _place, int _age)
    {
        name = _name;
        place_of_birth = _place;
        age = _age;
    }

    virtual void Speak();

    std::string name;
    std::string place_of_birth;
    int age;

    int operator+ (const Animals& A) {
        Animals Animal;
        Animal.age = this->age + A.age;
        return Animal.age;
    }

    std::string operator/ (const Animals& A) {
        std::string names = "Names: ";
        names += this->name + ", " + A.name;
        return names;
    }

private:
    int Animal_ID;
};

