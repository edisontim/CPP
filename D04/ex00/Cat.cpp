#include "Cat.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Cat::Cat(void) : Animal("Cat")
{
}


Cat::Cat(Cat const &src) 
{
}

Cat::~Cat()
{
}

//		OPERATORS 
//___________________________________

Cat &Cat::operator=(Cat const &rhs)
{
	return (*this);
}

//		UTILS
//___________________________________
void	Cat::makeSound(void) const
{
	std::cout << "Makes a Cat sound." << std::endl;
}