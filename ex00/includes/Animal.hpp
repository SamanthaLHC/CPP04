
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:

		Animal(void);
		Animal(std::string name);
		Animal(Animal const &cpy);
		Animal &operator=( Animal const &rhs);
		~Animal(void);

		void makeSound();

	protected:

		std::string type;

};

#endif