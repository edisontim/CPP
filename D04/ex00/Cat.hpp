#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{

protected:

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Cat(void);
	Cat(Cat const &src);
	~Cat();

//		GETTERS
//___________________________________


//		SETTERS
//___________________________________


//		OPERATORS 
//___________________________________
	Cat &operator=(Cat const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};

#endif