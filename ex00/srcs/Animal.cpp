
#include "Animal.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Animal::Animal()
{
	std::cout << BWHT << " Animal default constructor called."
			  << RES << std::endl;
}

Animal(std::string name)
{
	std::cout << BWHT << " Animal name constructor called."
			  << RES << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << BWHT << this->_name << " Animal copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Animal &Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string Animal::getType()
{
	this->_type;
}

// members functions ==========================================================
//=============================================================================

void Animal::makeSound()
{
	std::cout << BWHT << this->_name << " *strange animal noise*"
			  << RES << std::endl;
}
