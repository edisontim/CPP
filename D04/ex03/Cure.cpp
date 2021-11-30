#include "Cure.hpp"

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(Cure const &src)
{
	this->type = src.type;
}

Cure::~Cure(void)
{
}

//		OPERATORS 
//___________________________________
Cure &Cure::operator=(Cure const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

//		UTILS 
//___________________________________
Cure	*Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}