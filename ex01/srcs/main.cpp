
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
#include "colors.h"

int main()
{

	{
		std::cout << BRED << "____________MAIN DU SUJET____________" << RES << std::endl;
		const Animal *doggo = new Dog();
		const Animal *matou = new Cat();
		delete doggo; // should not create a leak
		delete matou;
	}
	{
		std::cout << BRED << "______VERIFS DEEP COPY CATS AND DOGS_______" << RES << std::endl;
		Dog samoyede;
		Dog bouvier;
		bouvier = samoyede;
		Cat zeph;
		Cat koko;
		koko = zeph;
	}
	{
		std::cout << BRED << "______CREATE ANIMAL ARRAY_______" << RES << std::endl;
		int n = 10;
		Animal *lot_of_pets[n];
		for (int i = 0; i < n; i++)
		{
			for (i = 0; i < n / 2; i++)
				lot_of_pets[i] = new Dog();
			for (i = i; i < n; i++)
				lot_of_pets[i] = new Cat();
		}
		for (int i = 0; i < n; i++)
			lot_of_pets[i]->makeSound();
		for (int i = 0; i < n; i++)
			delete lot_of_pets[i];
	}
	{
		std::cout << BRED << "______PETS GOT IDEAS_______" << RES << std::endl;
		Dog junior;
		Cat zeph;
		
	}
}