#include "Brain.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Brain::Brain()
{
	std::cout << BWHT << " Brain default constructor called."
			  << RES << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << BWHT << " Brain copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << BWHT << " Brain Destructor called" << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
		std::cout << BWHT << " Brain operator overload func called."
				  << RES << std::endl;
	return *this;
}
