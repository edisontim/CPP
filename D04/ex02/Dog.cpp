#include "Dog.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "A new dog was born." << std::endl;
	this->brain = new Brain();
}


Dog::Dog(Dog const &src) 
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

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A dog has passed away." << std::endl;
}

//		OPERATORS 
//___________________________________

Dog &Dog::operator=(Dog &rhs)
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
void	Dog::makeSound(void) const
{
	std::cout << "Makes a Dog sound." << std::endl;
}

//		SETTERS
//___________________________________
void Dog::setBrain(Brain *new_brain)
{
	this->brain = new_brain;
	std::cout << (this->brain->getIdeas())[0] << std::endl;
}

//		SETTERS
//___________________________________
Brain *Dog::getBrain(void)
{
	return (this->brain);
}
