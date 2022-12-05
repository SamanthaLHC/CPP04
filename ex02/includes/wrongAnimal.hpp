
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class wrongAnimal
{
	public:

		wrongAnimal(void);
		wrongAnimal(std::string name);
		wrongAnimal(wrongAnimal const &cpy);
		wrongAnimal &operator=( wrongAnimal const &rhs);
		~wrongAnimal(void);

		void makeSound() const;

		std::string getType() const;


	protected:

		std::string _type;

};

#endif