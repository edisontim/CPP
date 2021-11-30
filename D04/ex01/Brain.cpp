#include "Brain.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Brain::Brain(void)
{
	std::cout << "A brain was created" << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(Brain const &src)
{
	this->ideas = src.ideas;
}

Brain::~Brain()
{
	std::cout << "A brain was destroyed" << std::endl;
	delete [] this->ideas;
}

//		OPERATORS 
//___________________________________

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		this->ideas = rhs.ideas;
	return (*this);
}

//		UTILS
//___________________________________


//		GETTERS
//___________________________________
std::string	*Brain::getIdeas(void)
{
	return (this->ideas);
}


//		SETTERS
//___________________________________
void	Brain::setIdeas(std::string *new_ideas)
{
	this->ideas = new_ideas;
}