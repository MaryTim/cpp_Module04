#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const int ARRAY_SIZE = 4;
    A_Animal* animals[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; ++i) {
        animals[i] = new Cat();
    }
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        delete animals[i];
    }
    return 0;
}