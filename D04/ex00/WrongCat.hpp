#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{

protected:

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat();

//		GETTERS
//___________________________________


//		SETTERS
//___________________________________


//		OPERATORS 
//___________________________________
	WrongCat &operator=(WrongCat const &rhs);

//		UTILS
//___________________________________
	void makeSound() const;
};

#endif