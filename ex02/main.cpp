#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	//Animal animal;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;
	return 0;
}
