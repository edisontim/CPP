#include "PresidentialPardonForm.hpp"


//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential pardon form.", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential pardon form.", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy)
{
	this->_target = cpy._target;
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
}


//		OPERATORS
//___________________________________

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//		UTILS
//___________________________________

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->_target << " was forgiven by Zafod Beeblebrox." << std::endl;
}