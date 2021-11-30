#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

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
	~Animal();

//		GETTERS
//___________________________________

	std::string	getType(void) const;

//		SETTERS
//___________________________________


//		OPERATORS 
//___________________________________
	Animal &operator=(Animal const &rhs);

//		UTILS
//___________________________________
	virtual void makeSound() const;
};




#endif