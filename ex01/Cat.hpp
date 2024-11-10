#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &d);
		Cat &operator=(const Cat &d);
		void makeSound(void) const;
		std::string getType(void) const;
		Brain* getBrain(void) const;
};

#endif
