
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "colors.h"
#include <iostream>
#include <string>

// constructs and destruct =====================================================
//=============================================================================

WrongCat::WrongCat()
{
	std::cout << BWHT << " WrongCat default constructor called."
			  << RES << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal()
{
	std::cout << BWHT << this->_type << " WrongCat copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat()
{
	std::cout << BWHT << " WrongCat destructor called." << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void WrongCat::makeSound() const
{
	std::cout << BWHT << this->_type << " Mrrrraouuuw"
			  << RES << std::endl;
}
