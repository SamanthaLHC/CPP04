
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.h"
#include <sstream>

int main()
{
	// AAnimal pouet;
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
		samoyede.get_brain()->set_ideas("I am a samoyede");
		Dog bouvier = samoyede;
		std::cout << BMAG << "before change : " << RES << std::endl;
		bouvier.get_brain()->print_ideas();
		samoyede.get_brain()->print_ideas();
		std::cout << BMAG << "after change : " << RES << std::endl;
		bouvier.get_brain()->set_ideas("NO ! I am a bouvier!");
		bouvier.get_brain()->print_ideas();
		samoyede.get_brain()->print_ideas();

		Cat zeph;
		Cat koko = zeph;
	}
	{
		std::cout << BRED << "______CREATE ANIMAL ARRAY_______" << RES << std::endl;
		int n = 10;
		AAnimal *lot_of_pets[n];
		for (int i = 0; i < n; i++)
		{

			for (i = 0; i < n / 2; i++)
			{
				std::stringstream idea;
				idea <<  "I am Dog number " << i;
				lot_of_pets[i] = new Dog();
				((Dog*) lot_of_pets[i])->get_brain()->set_ideas(idea.str());
			}
			while (i < n)
			{
				std::stringstream idea;
				idea <<  "I am Cat number " << i;
				lot_of_pets[i] = new Cat();
				((Cat*) lot_of_pets[i])->get_brain()->set_ideas(idea.str());
				i++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			lot_of_pets[i]->makeSound();
			if (i < n / 2)
				((Dog*) lot_of_pets[i])->get_brain()->print_ideas();
			else
				((Cat*) lot_of_pets[i])->get_brain()->print_ideas();
		}
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