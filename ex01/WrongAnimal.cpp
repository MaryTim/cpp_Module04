#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("") {
    std::cout << "WrongAnimal has been initialized" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    std::cout << "WrongAnimal copy constructor has been called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
    return type_;
}

void WrongAnimal::makeSound() const {
    std::cout << "ertherthertebrtg rth etyhryj yjrt" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal has been deinitialized" << std::endl;
}