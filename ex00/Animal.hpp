#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string type);
		Animal(const Animal &a);
		Animal &operator=(const Animal &a);
		virtual std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
