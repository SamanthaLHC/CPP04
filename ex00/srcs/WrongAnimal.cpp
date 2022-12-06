
#include "WrongAnimal.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

WrongAnimal::WrongAnimal()
{
	std::cout << BWHT << " WrongAnimal default constructor called."
			  << RES << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << BWHT << " WrongAnimal copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BWHT << " WrongAnimal destructor called." << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string WrongAnimal::getType() const
{
	return this->_type;
}

// members functions ==========================================================
//=============================================================================

void WrongAnimal::makeSound() const
{
	std::cout << BWHT << this->_type << " *strange Animal noise*"
			  << RES << std::endl;
}
