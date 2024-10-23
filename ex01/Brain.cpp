#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "Default idea";
	}
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = b._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &b)
{
	std::cout << "Brain copy assignment called" << std::endl;
	if (this == &b)
		return *this;

	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = b._ideas[i];
	}
	return *this;
}

std::string *Brain::getIdeas(void)
{
	return this->_ideas;
}
