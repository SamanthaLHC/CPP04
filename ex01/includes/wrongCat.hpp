#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrongAnimal.hpp"
#include <iostream>
#include <string>

class wrongCat : public wrongAnimal
{
	public:

		wrongCat(void);
		wrongCat(std::string name);
		wrongCat(wrongCat const &cpy);
		wrongCat &operator=(wrongCat const &rhs);
		~wrongCat();

		void makeSound() const;

	private:


};

#endif