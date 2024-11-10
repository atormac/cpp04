#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &d) : Animal(d)
{
	std::cout << "Dog copy constructor called" << std::endl;

	this->brain = new Brain(*d.brain);
}

Dog &Dog::operator=(const Dog &d)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this == &d)
		return *this;
	this->_type = d._type;
	delete this->brain;
	this->brain = new Brain(*d.brain);
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

Brain* Dog::getBrain(void) const
{
	return this->brain;
}
