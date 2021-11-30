#ifndef INTERN_HPP
#define INTERN_HPP


#include "Form.hpp"
#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:


public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Intern(void);
	Intern(Intern const &cpy);
	~Intern();

//		OPERATORS
//___________________________________
	Intern &operator=(Intern const &rhs);

//		UTILS
//___________________________________
	Form	*makeForm(std::string form_name, std::string target) const;
};


#endif