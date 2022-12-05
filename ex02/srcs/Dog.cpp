
#include "Dog.hpp"
#include "Brain.hpp"
#include "colors.h"

// constructs and destruct =====================================================
//=============================================================================

Dog::Dog()
{
	std::cout << BWHT << " Dog default constructor called."
			  << RES << std::endl;
	this->_type = "Dog";
	this->_doggo_brain = new Brain();
}

Dog::Dog(std::string type)
{
	this->_type = type;
	std::cout << BWHT << " Dog type constructor called."
			  << RES << std::endl;
	this->_doggo_brain = new Brain();
}

Dog::Dog(const Dog &cpy) : AAnimal(cpy), _doggo_brain(NULL)
{
	std::cout << BWHT << " " << this->_type << " copy constructor called."
			  << RES << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << BWHT << " Dog Destructor called" << RES << std::endl;
	delete this->_doggo_brain;
}

// operator overload ==========================================================
//=============================================================================

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		if (this->_doggo_brain)
		{
			delete this->_doggo_brain;
			this->_doggo_brain = NULL;
		}
		if (rhs._doggo_brain)
			this->_doggo_brain = new Brain(*rhs._doggo_brain);
	}
	return *this;
}

// members functions and accessors ============================================
//=============================================================================

void Dog::makeSound()
{
	std::cout << BWHT << this->_type << " wouf wouf! "
			  << RES << std::endl;
}

Brain* Dog::get_brain() const
{
	return this->_doggo_brain;
}