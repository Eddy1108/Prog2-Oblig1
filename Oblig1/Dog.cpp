#include "Dog.h"

Dog::Dog() {

}

Dog::Dog(std::string _name, std::string _place, int _age)
{
	name = _name;
	place_of_birth = _place;
	age = _age;
}

void Dog::Speak()
{
	std::cout << "Woof Woof!";
}