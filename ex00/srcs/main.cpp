
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "colors.h"

int main()
{
const Animal* pet = new Animal();
const Animal* doggo = new Dog();
const Animal* matou = new Cat();
std::cout << doggo->getType() << " " << std::endl;
std::cout << matou->getType() << " " << std::endl;
std::cout << BMAG << "waiting for cat sound : " << RES << std::endl;
matou->makeSound(); //will output the cat sound!
std::cout << BMAG << "waiting for doggo sound : " << RES << std::endl;
doggo->makeSound();
std::cout << BMAG << "waiting for animal sound : " << RES << std::endl;
pet->makeSound();
return 0;
}