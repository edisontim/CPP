#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	virtual ~RobotomyRequestForm();

//		OPERATORS
//___________________________________
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

//		UTILS
//___________________________________
	virtual void	action(void) const;


};


#endif