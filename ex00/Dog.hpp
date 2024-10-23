#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
