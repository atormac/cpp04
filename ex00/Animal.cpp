#include "Animal.hpp"

Animal::Animal()
{
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

Animal &Animal::operator=(const Animal &a)
{
	this->_type = a._type;
	return *this;
}
