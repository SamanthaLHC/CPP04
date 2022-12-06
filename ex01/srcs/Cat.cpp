
#include "Cat.hpp"
#include "Brain.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Cat::Cat() : Animal("Cat"), _brain_cat(NULL)
{
	std::cout << BWHT << " Cat default constructor called."
			  << RES << std::endl;
	this->_brain_cat = new Brain();
}

Cat::Cat(std::string type) : Animal(type), _brain_cat(NULL)
{
	std::cout << BWHT << " Cat type constructor called."
			  << RES << std::endl;
	this->_brain_cat = new Brain();
}

Cat::Cat(const Cat &cpy) : Animal(cpy), _brain_cat(NULL)
{
	std::cout << BWHT << " Cat copy constructor called."
			  << RES << std::endl;
	this->_brain_cat = new Brain();
	*this = cpy;
}

Cat::~Cat()
{
	delete this->_brain_cat;
	std::cout << BWHT << " Cat Destructor called" << RES << std::endl;
}

// operator overload ==========================================================
//=============================================================================

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		if (this->_brain_cat)
		{
			delete this->_brain_cat;
			this->_brain_cat = NULL;
		}
		if (rhs._brain_cat)
			this->_brain_cat = new Brain(*rhs._brain_cat);
	}
	return *this;
}

// members functions and accessors =============================================
//==============================================================================

void Cat::makeSound() const
{
	std::cout << BWHT << this->_type << " Mrrrraouuuw"
			  << RES << std::endl;
}

Brain *Cat::get_brain() const
{
	return this->_brain_cat;
}