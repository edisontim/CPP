#include "WrongCat.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
}


WrongCat::WrongCat(WrongCat const &src) 
{
}

WrongCat::~WrongCat()
{
}

//		OPERATORS 
//___________________________________

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	return (*this);
}

//		UTILS
//___________________________________
void	WrongCat::makeSound(void) const
{
	std::cout << "Makes a WrongCat sound." << std::endl;
}