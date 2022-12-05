#ifndef Dog_HPP
#define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public AAnimal
{
	public:

		Dog(void);
		Dog(std::string name);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);
		~Dog();

		void makeSound();
		Brain* get_brain() const;

	private:
		
		Brain* _doggo_brain;
};

#endif