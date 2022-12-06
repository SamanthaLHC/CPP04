#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:

		Brain(void);
		Brain(Brain const &cpy);
		Brain &operator=(Brain const &rhs);
		~Brain();
	
		void print_ideas(void) const;
		std::string get_ideas(int idx) const;
		void set_ideas(std::string idea);

	private:

		std::string _ideas[100];
};

#endif