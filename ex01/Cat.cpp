#include "Cat.hpp"

Cat::Cat() : Animal(), type_("Cat") {
    brain = new Brain();
    std::cout << "Cat has been initialized with type " << type_ << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {
    std::cout << "Cat copy constructor has been called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

std::string Cat::getType() const {
    return type_;
}

void Cat::makeSound() const {
    std::cout << "MEEEEOOOOOWWWWWWW" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat has been deinitialized" << std::endl;
}