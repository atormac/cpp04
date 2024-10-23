#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &d) : WrongAnimal(d)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &d)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this == &d)
		return *this;
	this->_type = d._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->_type << " meowed!" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return this->_type;
}
