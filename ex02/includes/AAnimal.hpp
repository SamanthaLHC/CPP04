
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:

		AAnimal(void);
		AAnimal(std::string name);
		AAnimal(AAnimal const &cpy);
		AAnimal &operator=( AAnimal const &rhs);
		virtual ~AAnimal(void);

		virtual void makeSound() const = 0;

		std::string getType() const;


	protected:

		std::string _type;

};

#endif