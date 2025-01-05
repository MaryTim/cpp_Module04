#include "Animal.hpp"

A_Animal::A_Animal() : type_("") {
    std::cout << "Animal has been initialized" << std::endl;
}

A_Animal::A_Animal(const A_Animal& other) {
    std::cout << "Animal copy constructor has been called" << std::endl;
    *this = other;
}

A_Animal &A_Animal::operator=(const A_Animal &other) {
	std::cout << "Animal assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

std::string A_Animal::getType() const {
    return type_;
}

A_Animal::~A_Animal() {
    std::cout << "Animal has been deinitialized" << std::endl;
}