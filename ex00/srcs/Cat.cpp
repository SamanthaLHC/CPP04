
#include "Cat.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << BWHT << " Cat default constructor called."
			  << RES << std::endl;
}

Cat::Cat(const Cat &cpy): Animal()
{
	this->_type = "Cat";
	std::cout << BWHT << " Cat copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << BWHT << " Cat destructor called." << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Cat &Cat::operator=(const Cat &rhs)
{
	(void) rhs;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void Cat::makeSound() const
{
	std::cout << BWHT << this->_type << " Mrrrraouuuw"
			  << RES << std::endl;
}
