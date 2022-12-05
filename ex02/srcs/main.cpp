
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"
#include "colors.h"

int main()
{

	{
		std::cout << BRED << "____________MAIN DU SUJET____________" << RES << std::endl;
		const AAnimal *doggo = new Dog();
		const AAnimal *matou = new Cat();
		delete doggo; // should not create a leak
		delete matou;
	}
	{
		std::cout << BRED << "______VERIFS DEEP COPY CATS AND DOGS_______" << RES << std::endl;
		Dog samoyede;
		Dog bouvier = samoyede;
		if (bouvier.get_brain() == samoyede.get_brain())
		{
			std::cerr << BRED << " Two dogs are sharing one brain !! Are they siamese ?" << RES << std::endl;
			return 1;
		}
		Cat zeph;
		Cat koko = zeph;
		if (zeph.get_brain() == koko.get_brain())
		{
			std::cerr << BRED << " Two cats are sharing one brain !! Are they siamese ?" << RES << std::endl;
			return 1;
		}
	}
	{
		std::cout << BRED << "______CREATE ANIMAL ARRAY_______" << RES << std::endl;
		int n = 10;
		AAnimal *lot_of_pets[n];
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

		std::cout << BYEL << "Junior think :" << RES << std::endl;
		junior.get_brain()->set_ideas(" I will steal her slipper, hihihi!");
		junior.get_brain()->set_ideas(" Maybe i should ask for rubrub on my shoulders..");
		junior.get_brain()->set_ideas(" Oh ! Another slipper ! I can steal it ! huhuhu!");
		junior.get_brain()->print_ideas();
		std::cout << BYEL << "Zeph think :" << RES << std::endl;
		zeph.get_brain()->set_ideas(" I could set a schedule for my visits in the neighborhood in order to have as much food as possible .. ");
		zeph.get_brain()->set_ideas(" I'm wondering... What will happen if i push the glass out of the table ? ");
		zeph.get_brain()->set_ideas(" It is time for me to see my servant.. I think he will give me my fav food. ");
		zeph.get_brain()->print_ideas();
	}
}