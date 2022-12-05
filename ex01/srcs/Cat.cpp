
#include "Cat.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Cat::Cat()
{
	std::cout << BWHT << " Cat default constructor called."
			  << RES << std::endl;
	this->_type = "Cat";
	this->_brain_cat = new Brain();
}

Cat::Cat(std::string type) : Animal()
{
	this->_type = type;
	std::cout << BWHT << " Cat type constructor called."
			  << RES << std::endl;
	this->_brain_cat = new Brain();
}

Cat::Cat(const Cat &cpy) : Animal()
{
	std::cout << BWHT << this->_type << " Cat copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete this->_brain_cat;
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
