#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void makeSound() const;

	private:

};

#endif