#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "default";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = a._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy assingment called" << std::endl;
	if (this == &a)
		return *this;
	this->_type = a._type;
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "wrong animal sound default" << std::endl;
}
