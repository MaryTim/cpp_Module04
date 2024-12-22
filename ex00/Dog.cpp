#include "Dog.hpp"

Dog::Dog() : Animal(), type_("Dog") {
    std::cout << "Dog has been initialized with type " << type_ << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {
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

std::string Dog::getType() const {
    return type_;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog has been deinitialized" << std::endl;
}