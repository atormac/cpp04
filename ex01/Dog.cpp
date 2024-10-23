#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this == &d)
		return *this;
	this->_type = d._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << " barked!" << std::endl;
}

std::string Dog::getType(void) const
{
	return this->_type;
}
