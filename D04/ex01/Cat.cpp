#include "Cat.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "A new cat was born." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &src) 
{
	int	i;
	
	i = 0;
	delete this->brain->getIdeas();
	delete this->brain;
	Brain *temp = new Brain();
	std::string *new_array = new std::string[100];
	while (i < 99)
	{
		new_array[i] = (src.brain->getIdeas())[i];
		i++;
	}
	temp->setIdeas(new_array);
	this->brain = temp;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A cat has passed away." << std::endl;
}

//		OPERATORS 
//___________________________________

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		int	i;
		
		i = 0;
		delete this->brain->getIdeas();
		delete this->brain;
		Brain *temp = new Brain();
		std::string *new_array = new std::string[100];
		while (i < 99)
		{
			new_array[i] = (rhs.brain->getIdeas())[i];
			i++;
		}
		temp->setIdeas(new_array);
		this->brain = temp;
	}
	return (*this);
}

//		UTILS
//___________________________________
void	Cat::makeSound(void) const
{
	std::cout << "Makes a Cat sound." << std::endl;
}

//		SETTERS
//___________________________________
void Cat::setBrain(Brain *new_brain)
{
	this->brain = new_brain;
	std::cout << (this->brain->getIdeas())[0] << std::endl;
}