#include "Dog.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << BWHT << " Dog default constructor called."
			  << RES << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal()
{
	this->_type = "Dog";
	std::cout << BWHT << " Dog copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << BWHT << " Dog destructor called." << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Dog &Dog::operator=(const Dog &rhs)
{
	(void) rhs;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void Dog::makeSound() const
{
	std::cout << BWHT << this->_type << " wouf wouf! "
			  << RES << std::endl;
}
