#include "Cat.hpp"

Cat::Cat() : A_Animal() {
    type_ = "Cat";
    brain = new Brain();
    std::cout << "Cat has been initialized with type " << type_ << std::endl;
}

Cat::Cat(const Cat& other) : A_Animal() {
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

void Cat::makeSound() const {
    std::cout << "MEEEEOOOOOWWWWWWW" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat has been deinitialized" << std::endl;
}