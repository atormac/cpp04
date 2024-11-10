#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &d);
		WrongCat &operator=(const WrongCat &d);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
