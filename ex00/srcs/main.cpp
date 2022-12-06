
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.h"

int main()
{
	{
		std::cout << BCYN << " scenario with virtual:" << RES << std::endl;
		const Animal *pet = new Animal();
		const Animal *doggo = new Dog();
		const Animal *matou = new Cat();
		std::cout << BMAG << "get type : " << RES << std::endl;
		std::cout << doggo->getType() << " " << std::endl;
		std::cout << matou->getType() << " " << std::endl;
		std::cout << BMAG << "waiting for cat sound : " << RES << std::endl;
		matou->makeSound(); // will output the cat sound!
		std::cout << BMAG << "waiting for doggo sound : " << RES << std::endl;
		doggo->makeSound();
		std::cout << BMAG << "waiting for animal sound : " << RES << std::endl;
		pet->makeSound();
		std::cout << BMAG << "destructors : " << RES << std::endl;
		delete pet;
		delete doggo;
		delete matou;
	}
	{
		std::cout << std::endl;
		std::cout << BCYN << " scenario without virtual:" << RES << std::endl;
		const WrongAnimal *pet = new WrongAnimal();
		const WrongAnimal *matou = new WrongCat();
		const WrongCat *el_gato = new WrongCat();
		std::cout << matou->getType() << " " << std::endl;
		std::cout << BMAG << "wrong cat sound : " << RES << std::endl;
		matou->makeSound(); 
		std::cout << BMAG << "wrong cat but right sound : " << RES << std::endl;
		el_gato->makeSound(); 
		std::cout << BMAG << "waiting for animal sound : " << RES << std::endl;
		pet->makeSound();
		std::cout << BMAG << "destructors : " << RES << std::endl;
		delete pet;
		delete matou;
		delete el_gato;
	}
	{
		std::cout << std::endl;
		std::cout << BCYN << "Verifs copy construct:" << RES << std::endl;
		Cat koyo;
		Cat zeph(koyo);
		Dog junior;
		Dog choyo;
		choyo = junior;
		std::cout << BMAG << "destructors : " << RES << std::endl;

	}
}