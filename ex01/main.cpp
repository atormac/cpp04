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
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << std::endl;

	Dog dog1;
	Dog dog2 = dog1;
	std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
	dog1.getBrain()->setIdea(0, "New Idea");
	std::cout << "Dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
}
