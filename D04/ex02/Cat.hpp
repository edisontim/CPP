#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat : public AAnimal
{

protected:
	
	Brain	*brain;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Cat(void);
	Cat(Cat const &src);
	virtual ~Cat();

//		GETTERS
//___________________________________

//		SETTERS
//___________________________________
	virtual void setBrain(Brain *new_brain);

//		OPERATORS 
//___________________________________
	Cat &operator=(Cat const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};

#endif