#include "Bureaucrat.hpp"



//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Bureaucrat::Bureaucrat(void) : _name("Unknown"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();	
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
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
}

void			Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
		this->_grade++;
}

//		UTILS
//___________________________________

void	Bureaucrat::signForm(Form &to_sign) const
{
	try
	{
		to_sign.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << *this << " cannot sign " << to_sign << " because : " << e.what() << std::endl;
		return ;
	}
	std::cout << *this << " signs " << to_sign << std::endl;

}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << *this << " cannot execute this form because " << e.what() << std::endl;
		return ;
	}
	std::cout << *this << " signed the form : " << form << std::endl;
}
