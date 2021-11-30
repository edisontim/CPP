#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{

protected:

	std::string _type;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	~WrongAnimal();

//		GETTERS
//___________________________________

	std::string	getType(void) const;

//		SETTERS
//___________________________________


//		OPERATORS 
//___________________________________
	WrongAnimal &operator=(WrongAnimal const &rhs);

//		UTILS
//___________________________________
	void makeSound() const;
};




#endif