#include "Dog.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Dog::Dog(void) : Animal("Dog")
{
}


Dog::Dog(Dog const &src) 
{
}

Dog::~Dog()
{
}

//		OPERATORS 
//___________________________________

Dog &Dog::operator=(Dog const &rhs)
{
	return (*this);
}

//		UTILS
//___________________________________
void	Dog::makeSound(void) const
{
	std::cout << "Makes a Dog sound." << std::endl;
}