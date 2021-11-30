#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:

	std::string const	_name;
	unsigned int		_grade;

public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Bureaucrat(void);
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(Bureaucrat const &cpy);
	~Bureaucrat();

//		OPERATORS
//___________________________________

	Bureaucrat		&operator=(Bureaucrat const &rhs);

//		GETTERS/SETTERS
//___________________________________

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			incrementGrade(void);
	void			decrementGrade(void);

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
public:
	virtual const char *what() const throw()
	{
		return ("Grade is too low.");
	}
};
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &rhs);


#endif