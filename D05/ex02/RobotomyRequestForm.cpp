#include "RobotomyRequestForm.hpp"


//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy request form.", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy request form.", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy)
{
	this->_target = cpy._target;
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
}


//		OPERATORS
//___________________________________

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//		UTILS
//___________________________________

void	RobotomyRequestForm::action(void) const
{
	srand(time(NULL));
	std::cout << "BBBBBRBBRBBRRTTTXTTXTXTTTXTTXXRRRRRR    ";
	if (rand() % 2)
		std::cout << ".... robotomy was succcessful";
	else
		std::cout << ".... robotomy failed.";
	std::cout << std::endl;
}