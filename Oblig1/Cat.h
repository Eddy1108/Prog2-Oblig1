#pragma once
#include "Animals.h"
class Cat :	public Animals
{
public:
	Cat();
	Cat(std::string _name, std::string _place, int _age);

	virtual void Speak() override;
};

