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
		Cat(std::string name);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
		~Cat();

		void makeSound() const;
		Brain* get_brain() const;

	private:

		Brain* _brain_cat;


};

#endif