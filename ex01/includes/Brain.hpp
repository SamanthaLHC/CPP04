#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Brain
{
	public:

		Brain(void);
		Brain(Brain const &cpy);
		Brain &operator=(Brain const &rhs);
		~Brain();

		std::string getIdeas();
		std::string setIdeas();

	private:

	std::string _ideas[100];


};

#endif