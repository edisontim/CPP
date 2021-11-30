#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{

protected:

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Dog(void);
	Dog(Dog const &src);
	~Dog();

//		GETTERS
//___________________________________


//		SETTERS
//___________________________________


//		OPERATORS 
//___________________________________
	Dog &operator=(Dog const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};

#endif