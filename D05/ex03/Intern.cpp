#include "Intern.hpp"

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Intern::Intern(void)
{
}

Intern::Intern(Intern const &cpy)
{
	static_cast<void>(cpy);
}

Intern::~Intern()
{
}

//		OPERATORS
//___________________________________
Intern &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

//		UTILS
//___________________________________
Form	*Intern::makeForm(std::string form_name, std::string target) const
{
	int	i;
	int	y;
	unsigned int j;

	j = 0;
	std::string forms[3] = {"shrubbery request", "robotomy request", "presidential pardon request"};
	while (j < form_name.length())
	{
		form_name[j] = tolower(form_name[j]);
		j++;
	}
	Form *object_array[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	Form *to_ret;
	
	y = 0;
	i = 0;
	while (i < 3)
	{
		if (!forms[i].compare(form_name))
			to_ret = object_array[i];
		i++;
	}
	i--;
	while (y < 3)
	{
		if (y != i)
			delete object_array[y];
		y++;
	}
	return to_ret;
}