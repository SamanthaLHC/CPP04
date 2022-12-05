
#include "Animal.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Animal::Animal()
{
	std::cout << BBLU << " Animal default constructor called."
			  << RES << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << BBLU << " Animal type constructor called."
			  << RES << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << BBLU << " Animal copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << BBLU << " Animal Destructor called" << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string Animal::getType() const
{
	return this->_type;
}

// members functions ==========================================================
//=============================================================================

void Animal::makeSound() const
{
	std::cout << BBLU << this->_type << " *strange animal noise*"
			  << RES << std::endl;
}
