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

		Bureaucrat	georges("Georges", 0);
	}
	catch(std::exception &f)
	{
		std::cerr << f.what() << std::endl;
	}
	try
	{
		Bureaucrat tom("Tom", 50);
		Form sign_quick("Just sign, don't read", 10, 10);
		tom.signForm(sign_quick);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form to_be_signed("Important, sign ASAP", 100, 100);
		Bureaucrat tom("Tom", 50);

		to_be_signed.beSigned(tom);
		std::cout << to_be_signed << std::endl;

		Form wrong_form("oops", 190, 2900);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
