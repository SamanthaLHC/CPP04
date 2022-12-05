
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
#include "colors.h"

int main()
{

	const Animal *doggo = new Dog();
	const Animal *matou = new Cat();
	delete doggo; // should not create a leak
	delete matou;
	//mettre des trucs ici  
	
	return 0;
}