#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{

protected:

	std::string _type;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal();

//		GETTERS
//___________________________________

	std::string	getType(void) const;

//		SETTERS
//___________________________________
	virtual void setBrain(Brain *new_brain);

//		OPERATORS 
//___________________________________
	AAnimal &operator=(AAnimal const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const = 0;
};




#endif