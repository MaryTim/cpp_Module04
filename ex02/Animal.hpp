#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class A_Animal {
public:
    A_Animal();
    A_Animal(const A_Animal& other);
    A_Animal& operator=(const A_Animal& other);
    virtual ~A_Animal();


    std::string getType() const;
    virtual void makeSound() const = 0;
protected:
    std::string type_;
};

#endif