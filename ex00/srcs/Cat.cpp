
#include "Cat.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << BWHT << " Cat default constructor called."
			  << RES << std::endl;
}

Cat::Cat(std::string type): Animal()
{
	this->_type = type;
	std::cout << BWHT << " Cat type constructor called."
			  << RES << std::endl;
}

Cat::Cat(const Cat &cpy): Animal()
{
	std::cout << BWHT << this->_type << " Cat copy constructor called."
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
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// members functions ==========================================================
//=============================================================================

void Cat::makeSound() const
{
	std::cout << BWHT << this->_type << " Mrrrraouuuw"
			  << RES << std::endl;
}
