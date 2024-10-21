#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		~Animal();
		Animal(std::string type);
		Animal &operator=(const Animal &a);
};

#endif
