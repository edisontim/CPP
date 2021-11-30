#include "AMateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(AMateria const &src)
{
	this->type = src.type;
}


AMateria &AMateria::operator=(AMateria &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}


std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{

}
