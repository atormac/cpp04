#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	Animal *arr[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	/*
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j; //should not create a leak
	delete i;
	*/
	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
}
