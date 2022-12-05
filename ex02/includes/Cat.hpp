#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal
{
	public:

		Cat(void);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
		~Cat();

		void makeSound();
		Brain* get_brain() const;

	private:

		Brain* _brain_cat;


};

#endif