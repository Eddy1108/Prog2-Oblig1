#include <iostream>
#include "Bird.h"
Bird::Bird(){}

Bird::Bird(std::string _name, std::string _place, int _age)
{
	name = _name;
	place_of_birth = _place;
	age = _age;
}

void Bird::Speak()
{
	std::cout << "Tweet Tweet Bird up!";
}
