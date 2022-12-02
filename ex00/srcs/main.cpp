
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* pet = new Animal();
const Animal* doggo = new Dog();
const Animal* matou = new Cat();
std::cout << doggo->getType() << " " << std::endl;
std::cout << matou->getType() << " " << std::endl;
matou->makeSound(); //will output the cat sound!
doggo->makeSound();
pet->makeSound();
return 0;
}