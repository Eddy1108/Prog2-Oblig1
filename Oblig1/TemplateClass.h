#pragma once
#include <iostream>
template<class T1,class T2>
class TemplateClass
{
public:
	T1 x;
	T2 y;

	T1 combineValues();

	void printValues();

	TemplateClass(T1 _x, T2 _y) : x{ _x }, y{ _y }
	{

	}

};

template<class T1, class T2>
T1 TemplateClass<T1, T2>::combineValues()
{
	return x + y;
}

template<class T1, class T2>
inline void TemplateClass<T1, T2>::printValues()
{
	std::cout << x << ", " << y;
}
