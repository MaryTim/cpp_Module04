#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type_ = "Wrong Cat";
    std::cout << "WrongCat has been initialized with type " << type_ << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal() {
    std::cout << "WrongCat copy constructor has been called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->type_ = other.type_;
	}
	return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat has been deinitialized" << std::endl;
}