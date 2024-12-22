#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrong_smth = new WrongAnimal();
    const WrongAnimal* kitkat = new WrongCat();
    std::cout << wrong_smth->getType() << " " << std::endl;
    std::cout << kitkat->getType() << " " << std::endl;
    kitkat->makeSound();
    wrong_smth->makeSound();
    delete wrong_smth;
    delete kitkat;
    return 0;
}