#include "Form.hpp"

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Form::Form(void) : _name ("Unknown"), _signed(false), _grade_to_sign(150), _grade_to_execute(150)
{
}

Form::Form(std::string const name, unsigned int grade_to_sign, unsigned int grade_to_execute) : _name(name) , _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150)
		throw Form::GradeTooLowException();
	if (grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

//		GETTERS/SETTERS
//___________________________________
std::string const Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

unsigned int Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

unsigned int Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

//		OPERATORS
//___________________________________
Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, Form const &form)
{
	std::string string_signed;
	if (form.getSigned())
		string_signed = "yes.";
	else
		string_signed = "no.";
	output << "Form : " << form.getName() << ", grade to sign : " << form.getGradeToSign() << ", grade to execute : " << form.getGradeToExecute() << ", signed : " << string_signed;
	return (output);
}

//		UTILS
//___________________________________
Form &Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
	return (*this);
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed)
	{
		if (executor.getGrade() <= this->getGradeToExecute())
			this->action();
		else
			throw GradeTooLowException();
	}
	else
		throw FormNotSignedException();
}