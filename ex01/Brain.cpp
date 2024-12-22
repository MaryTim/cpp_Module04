#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain has been initialized" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor has been called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain assignment operator constructor has been called!" << std::endl;
	if (this != &other) { }
	return *this;
}

Brain::~Brain() {
    std::cout << "Brain has been deinitialized" << std::endl;
}