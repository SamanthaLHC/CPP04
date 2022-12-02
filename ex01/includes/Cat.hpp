#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	public:

		Cat(void);
		Cat(std::string name);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
		~Cat();

		void makeSound() const;

	private:


};

#endif