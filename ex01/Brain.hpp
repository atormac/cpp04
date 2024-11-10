#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &b);
		Brain &operator=(const Brain &b);

		std::string *getIdeas(void);
		std::string getIdea(int i) const;
		void	setIdea(int i, std::string idea);
};

#endif
