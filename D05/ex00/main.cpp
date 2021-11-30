#include "Bureaucrat.hpp"

int main()
{
	try
	{
		int	i;
		Bureaucrat tom("Tom", 100);
		std::cout << tom << std::endl;

		i = 0;
		while (i < 50)
		{
			tom.incrementGrade();
			i++;
		}
		std::cout << tom << std::endl;
		while (i > 0)
		{
			tom.decrementGrade();
			i--;
		}
		std::cout << tom << std::endl;
		Bureaucrat	georges("Georges", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &f)
	{
		std::cout << f.what () << std::endl;
	}
	try
	{
		Bureaucrat	greg("Greg", 160);
	}
	catch (std::exception &g)
	{
		std::cout << g.what() << std::endl;
	}
}
