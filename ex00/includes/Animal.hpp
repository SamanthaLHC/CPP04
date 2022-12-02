
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
		virtual ~Animal(void);

		virtual void makeSound();

		std::string getType();


	protected:

		std::string _type;

};

#endif