#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

#include <iostream>
#include <string>

class Dog : public AAnimal
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
	Brain *getBrain(void);

//		SETTERS
//___________________________________
	void setBrain(Brain *new_brain);

//		OPERATORS 
//___________________________________
	Dog &operator=(Dog &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};

#endif