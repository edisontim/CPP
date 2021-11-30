#include "Ice.hpp"

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(Ice const &src)
{
	this->type = src.type;
}

Ice::~Ice(void)
{
}

//		OPERATORS 
//___________________________________
Ice &Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

//		UTILS 
//___________________________________
Ice	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}