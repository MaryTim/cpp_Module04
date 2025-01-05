#include "Dog.hpp"

Dog::Dog() : A_Animal() {
    type_ = "Dog";
    brain = new Brain();
    std::cout << "Dog has been initialized with type " << type_ << std::endl;
}

Dog::Dog(const Dog& other) : A_Animal() {
    std::cout << "Dog copy constructor has been called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof!" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog has been deinitialized" << std::endl;
}