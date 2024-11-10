#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "default";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = a._type;
}

Animal &Animal::operator=(const Animal &a)
{
	std::cout << "Animal copy assingment called" << std::endl;
	if (this == &a)
		return *this;
	this->_type = a._type;
	return *this;
}

std::string Animal::getType(void) const
{
	return this->_type;
}

void Animal::makeSound(void) const
{
	std::cout << "animal sound default" << std::endl;
}
