#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"
#include <iostream>
#include <string>

class Brain
{
	public:

		Brain(void);
		Brain(Brain const &cpy);
		Brain &operator=(Brain const &rhs);
		~Brain();
	
		void print_ideas(void);
		std::string* get_ideas(void);
		void set_ideas(std::string idea);

	private:

		std::string _ideas[100];
};

#endif