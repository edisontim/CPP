#include "ShrubberyCreationForm.hpp"


//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery creation form.", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery creation form.", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
{
	this->_target = cpy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}


//		OPERATORS
//___________________________________

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//		UTILS
//___________________________________

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream output_file;
	output_file.open(this->_target+"_shrubbery");
	output_file << "      /\\      " << std::endl;
	output_file << "     /\\*\\     "<< std::endl;
	output_file << "    /\\O\\*\\    "<< std::endl;
	output_file << "   /*/\\/\\/\\   "<< std::endl;
	output_file << "  /\\O\\/\\*\\/\\  "<< std::endl;
	output_file << " /\\*\\/\\*\\/\\/\\ "<< std::endl;
	output_file << "/\\O\\/\\/*/\\/O/\\"<< std::endl;
	output_file << "      ||      "<< std::endl;
	output_file << "      ||      "<< std::endl;
	output_file << "      ||      "<< std::endl;

}