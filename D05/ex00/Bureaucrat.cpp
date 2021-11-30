#include "Bureaucrat.hpp"


//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Bureaucrat::Bureaucrat(void) : _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();	
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name)
{
	this->_grade = cpy._grade;
}

Bureaucrat::~Bureaucrat()
{
}

//		OPERATORS
//___________________________________
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &rhs)
{
	output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (output);
}

//		GETTERS/SETTERS
//___________________________________

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::incrementGrade(void)
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}