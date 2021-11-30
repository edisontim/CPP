#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	
	std::string const	_name;
	bool				_signed;
	unsigned int const	_grade_to_sign;
	unsigned int const	_grade_to_execute;
public:
//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Form(void);
	Form(std::string const name, unsigned int grade_to_sign, unsigned int grade_to_execute);
	Form(Form const &cpy);
	virtual ~Form();

//		GETTERS/SETTERS
//___________________________________
	std::string const	getName(void) const;
	bool				getSigned(void) const;
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExecute(void) const;

//		OPERATORS
//___________________________________
	Form				&operator=(Form const &rhs);

//		UTILS
//___________________________________
	Form				&beSigned(Bureaucrat const &bureaucrat);
	void			execute (Bureaucrat const &executor) const;
	virtual void	action(void) const = 0;

//		EXCEPTIONS
//___________________________________
	
	class GradeTooHighException : public std::exception
	{
	public :
		virtual const char *what() const throw()
		{
			return ("Grade is too high.");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public :
		virtual const char *what() const throw()
		{
			return ("Grade is too low.");
		}
	};
	class FormNotSignedException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("Form is not signed.");
			}
	};

};

std::ostream	&operator<<(std::ostream &output, Form const &form);

#endif