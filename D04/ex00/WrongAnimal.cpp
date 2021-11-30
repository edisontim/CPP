#include "WrongAnimal.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
WrongAnimal::WrongAnimal(void)
{
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	this->_type = src._type;
}

WrongAnimal::~WrongAnimal()
{
}

//		OPERATORS 
//___________________________________

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

//		UTILS
//___________________________________
void	WrongAnimal::makeSound(void) const
{
	std::cout << "Makes a WrongAnimal sound." << std::endl;
}

//		GETTERS
//___________________________________

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}