#include "AAnimal.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
AAnimal::AAnimal(void)
{
	std::cout << "An animal was created." << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
}

AAnimal::AAnimal(AAnimal const &src)
{
	this->_type = src._type;
}

AAnimal::~AAnimal()
{
	std::cout << "An animal has died." << std::endl;
}

//		OPERATORS 
//___________________________________

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

//		UTILS
//___________________________________


//		GETTERS
//___________________________________

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void AAnimal::setBrain(Brain *new_brain)
{
	
}
