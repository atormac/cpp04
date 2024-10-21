#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	std::cout << this->_type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called" << std::endl;
}
