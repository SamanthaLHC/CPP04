#include "Dog.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Dog::Dog()
{
	std::cout << BWHT << " Dog default constructor called."
			  << RES << std::endl;
}

Dog::Dog(std::string type): Animal()
{
	this->_type = type;
	std::cout << BWHT << " Dog name constructor called."
			  << RES << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal()
{
	std::cout << BWHT << this->_type << " Dog copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Dog &Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void Dog::makeSound() const
{
	std::cout << BWHT << this->_type << " wouf wouf! "
			  << RES << std::endl;
}
