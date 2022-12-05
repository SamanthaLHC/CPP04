
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:

		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal ( AAnimal const &copy );
		AAnimal &operator=( AAnimal const &rhs );
		
		virtual void makeSound() = 0;

		std::string getType() const;

	protected:

		std::string _type;

};

#endif