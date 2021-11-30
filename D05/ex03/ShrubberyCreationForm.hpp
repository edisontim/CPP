#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	virtual ~ShrubberyCreationForm();

//		OPERATORS
//___________________________________
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

//		UTILS
//___________________________________
	virtual void	action(void) const;
};


#endif