
#include "wrongAnimal.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

wrongAnimal::wrongAnimal()
{
	std::cout << BWHT << " wrongAnimal default constructor called."
			  << RES << std::endl;
}

wrongAnimal::wrongAnimal(std::string type): _type(type)
{
	std::cout << BWHT << " wrongAnimal type constructor called."
			  << RES << std::endl;
}

wrongAnimal::wrongAnimal(const wrongAnimal &cpy)
{
	std::cout << BWHT << " wrongAnimal copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of wrongAnimal\e[0m" << std::endl;
}

// operator overload ==========================================================
//=============================================================================

wrongAnimal &wrongAnimal::operator=(const wrongAnimal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// accessors ==================================================================
//=============================================================================

std::string wrongAnimal::getType() const
{
	return this->_type;
}

// members functions ==========================================================
//=============================================================================

void wrongAnimal::makeSound() const
{
	std::cout << BWHT << this->_type << " *strange Animal noise*"
			  << RES << std::endl;
}
