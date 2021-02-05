// Oblig1.cpp

#include <iostream>
#include <string>
#include "Animals.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
#include "TemplateClass.h"

int main()
{
    //Inheritance
    Dog dog1("Dog", "Barn", 1);
    dog1.Speak();

    Cat cat1("Cat", "Barn", 1);
    cat1.Speak();

    Bird bird1("Bird", "Barn", 1);
    bird1.Speak();

    //Operator Overload
    Animals animal1("Cow", "Barn", 5);
    Animals animal2("Pig", "Barn", 2);

    int totalAge = animal1 + animal2;
    std::cout << "\n\nAnimal1: " << animal1.age << "\nAnimal2: " << animal2.age << "\nTotal Age is: " << totalAge;
    std::cout << std::endl << animal1 / animal2;

    //Template
    TemplateClass<double, float> obj1{ 55.5, 3.5f };
    double results = obj1.combineValues();
    std::cout << "\n\n\n" << results << std::endl;
    
    TemplateClass<std::string, int> obj2{ "Markus: ", 35 };
    obj2.printValues();

}