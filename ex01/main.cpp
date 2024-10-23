#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "polymorphism" << std::endl;
	Dog dog1;
	Cat cat1;

	dog1.makeSound();
	cat1.makeSound();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	x->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;
	delete x;
	return 0;
}
