
#include "wrongCat.hpp"
#include "colors.h"
#include <iostream>
#include <string>

// constructs and destruct =====================================================
//=============================================================================

wrongCat::wrongCat()
{
	std::cout << BWHT << " wrongCat default constructor called."
			  << RES << std::endl;
}

wrongCat::wrongCat(std::string type): wrongAnimal()
{
	this->_type = type;
	std::cout << BWHT << " wrongCat type constructor called."
			  << RES << std::endl;
}

wrongCat::wrongCat(const wrongCat &cpy): wrongAnimal()
{
	std::cout << BWHT << this->_type << " wrongCat copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

wrongCat::~wrongCat()
{
	std::cout << "\e[0;31mDestructor called of wrongCat\e[0m" << std::endl;
}

// operator overload ==========================================================
//=============================================================================

wrongCat &wrongCat::operator=(const wrongCat &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void wrongCat::makeSound() const
{
	std::cout << BWHT << this->_type << " Mrrrraouuuw"
			  << RES << std::endl;
}
