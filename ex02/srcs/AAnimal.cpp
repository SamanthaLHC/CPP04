
#include "AAnimal.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

AAnimal::AAnimal()
{
	std::cout << BBLU << " AAnimal default constructor called."
			  << RES << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	std::cout << BBLU << " AAnimal copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

AAnimal::~AAnimal()
{
	std::cout << BBLU << " AAnimal Destructor called" << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string AAnimal::getType() const
{
	return this->_type;
}