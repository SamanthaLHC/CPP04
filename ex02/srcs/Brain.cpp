#include "Brain.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//==============================================================================

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "";
	}
	std::cout << BMAG << " Brain default constructor called."
			  << RES << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "";
	}
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
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs.get_ideas(i);
		}
	}
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string Brain::get_ideas(int idx) const
{
	if (idx < 0 || idx > 100)
	{
		std::cout << BRED << "Index not in range." << RES << std::endl;
		return this->_ideas[0];
	}	
	return this->_ideas[idx];
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

void Brain::print_ideas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] != "")
			std::cout << BYEL << this->_ideas[i] << RES << std::endl;
	}
}