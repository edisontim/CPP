#include "Animal.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Animal::Animal(void)
{
	std::cout << "An animal was created." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "An animal was created." << std::endl;
}

Animal::Animal(Animal const &src)
{
	this->_type = src._type;
}

Animal::~Animal()
{
	std::cout << "An animal has died." << std::endl;
}

//		OPERATORS 
//___________________________________

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

//		UTILS
//___________________________________
void	Animal::makeSound(void) const
{
	std::cout << "Makes an animal sound." << std::endl;
}

//		GETTERS
//___________________________________

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void Animal::setBrain(Brain *new_brain)
{
	
}
