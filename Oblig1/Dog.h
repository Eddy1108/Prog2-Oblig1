#pragma once
#include <iostream>
#include "Animals.h"
class Dog :	public Animals
{
public:
	Dog();
	Dog(std::string _name, std::string _place, int _age);

	virtual void Speak() override;
};

