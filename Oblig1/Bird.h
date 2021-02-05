#pragma once
#include "Animals.h"
class Bird : public Animals
{
public:
	Bird();
	Bird(std::string _name, std::string _place, int _age);

	virtual void Speak() override;
};

