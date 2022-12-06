
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal (std::string type);
		WrongAnimal(WrongAnimal const &cpy);
		WrongAnimal &operator=( WrongAnimal const &rhs);
		~WrongAnimal(void);

		void makeSound() const;

		std::string getType() const;


	protected:

		std::string _type;

};

#endif