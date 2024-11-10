#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &d) : Animal(d)
{
	std::cout << "Cat copy constructor called" << std::endl;

	this->brain = new Brain(*d.brain);
}

Cat &Cat::operator=(const Cat &d)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this == &d)
		return *this;
	this->_type = d._type;
	delete this->brain;
	this->brain = new Brain(*d.brain);
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

Brain* Cat::getBrain(void) const
{
	return this->brain;
}