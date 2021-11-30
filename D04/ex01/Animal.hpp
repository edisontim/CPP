#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{

protected:

	std::string _type;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal();

//		GETTERS
//___________________________________

	std::string	getType(void) const;

//		SETTERS
//___________________________________
	virtual void setBrain(Brain *new_brain);

//		OPERATORS 
//___________________________________
	Animal &operator=(Animal const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};




#endif