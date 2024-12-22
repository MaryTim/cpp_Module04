#include "Animal.hpp"

Animal::Animal() : type_("") {
    std::cout << "Animal has been initialized" << std::endl;
}

Animal::Animal(const Animal& other) {
    std::cout << "Animal copy constructor has been called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

std::string Animal::getType() const {
    return type_;
}

void Animal::makeSound() const {
    std::cout << "An animal makes a sound" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal has been deinitialized" << std::endl;
}