#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

#include <iostream>
#include <string>

class Dog : public Animal
{

protected:
	
	Brain	*brain;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog();

//		GETTERS
//___________________________________


//		SETTERS
//___________________________________
	void setBrain(Brain *new_brain);

//		OPERATORS 
//___________________________________
	Dog &operator=(Dog const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};

#endif