
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
#include "colors.h"

int main()
{
	{
		std::cout << BCYN << " scenario with virtual:" << RES << std::endl;
		const Animal *pet = new Animal();
		const Animal *doggo = new Dog();
		const Animal *matou = new Cat();
		std::cout << doggo->getType() << " " << std::endl;
		std::cout << matou->getType() << " " << std::endl;
		std::cout << BMAG << "waiting for cat sound : " << RES << std::endl;
		matou->makeSound(); // will output the cat sound!
		std::cout << BMAG << "waiting for doggo sound : " << RES << std::endl;
		doggo->makeSound();
		std::cout << BMAG << "waiting for animal sound : " << RES << std::endl;
		pet->makeSound();
	}
	{
		std::cout << std::endl;
		std::cout << BCYN << " scenario without virtual:" << RES << std::endl;
		const wrongAnimal *pet = new wrongAnimal();
		const wrongAnimal *matou = new wrongCat();
		std::cout << matou->getType() << " " << std::endl;
		std::cout << BMAG << "wrong cat sound : " << RES << std::endl;
		matou->makeSound(); 
		std::cout << BMAG << "waiting for animal sound : " << RES << std::endl;
		pet->makeSound();
	}
}