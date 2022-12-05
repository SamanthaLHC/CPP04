#include "Brain.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//==============================================================================

Brain::Brain()
{
	std::cout << BMAG << " Brain default constructor called."
			  << RES << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << BMAG << " Brain copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << BMAG << " Brain Destructor called" << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
		std::cout << BMAG << " Brain operator overload func called."
				  << RES << std::endl;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string* Brain::get_ideas(void)
{
	return this->_ideas; 
}

void Brain::set_ideas(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] == "")
		{
			this->_ideas[i] = idea;
			break;
		}
	}
}

void Brain::print_ideas()
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] != "")
			std::cout << BYEL << this->_ideas[i] << RES << std::endl;
	}
}