#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		void makeSound(void) const;
		std::string getType(void) const;
		Brain* getBrain(void) const;
};

#endif
