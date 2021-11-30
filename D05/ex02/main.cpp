#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
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

		Bureaucrat	georges("Georges", 0);
	}
	catch(std::exception &f)
	{
		std::cerr << f.what() << std::endl;
	}

	try
	{
		PresidentialPardonForm to_be_signed("Sam");
		RobotomyRequestForm new_form("Robot");

		Bureaucrat big_bob("Bob", 1);
		new_form.beSigned(big_bob);
		new_form.execute(big_bob);
		big_bob.signForm(to_be_signed);
		to_be_signed.execute(big_bob);
		std::cout << to_be_signed << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat tom("Tom", 100);
		ShrubberyCreationForm sign_quick("Tom");
		tom.signForm(sign_quick);
		sign_quick.execute(tom);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		ShrubberyCreationForm sign_this("This guy");
		Bureaucrat Frank("Frank", 50);

		sign_this.execute(Frank);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat tom("Tom", 20);
		PresidentialPardonForm sign_quick("Tom");
		tom.signForm(sign_quick);
		tom.executeForm(sign_quick);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
