#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &d);
		Cat &operator=(const Cat &d);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
