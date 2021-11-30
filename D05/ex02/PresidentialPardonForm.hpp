#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	virtual ~PresidentialPardonForm();

//		OPERATORS
//___________________________________
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

//		UTILS
//___________________________________
	virtual void	action(void) const;


};


#endif