#include <iostream>
#include "Cat.h"

Cat::Cat() {
	
}

Cat::Cat(std::string _name, std::string _place, int _age)
{
	name = _name;
	place_of_birth = _place;
	age = _age;
}

void Cat::Speak()
{
	std::cout << "Meow Meow!";
}
