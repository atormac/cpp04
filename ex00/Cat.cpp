#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(const Cat &d) : Animal(d)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &d)
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this == &d)
		return *this;
	this->_type = d._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << " meowed!" << std::endl;
}

std::string Cat::getType(void) const
{
	return this->_type;
}
