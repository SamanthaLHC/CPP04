#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const &cpy);
		WrongCat &operator=(WrongCat const &rhs);
		~WrongCat();

		void makeSound() const;

	private:


};

#endif