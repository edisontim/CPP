#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

protected:
	std::string *ideas;


public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Brain(void);
	Brain(std::string type);
	Brain(Brain const &src);
	~Brain();

//		GETTERS
//___________________________________
	std::string	*getIdeas(void);
//		SETTERS
//___________________________________
	void	setIdeas(std::string *new_ideas);

//		OPERATORS 
//___________________________________
	Brain &operator=(Brain const &rhs);

//		UTILS
//___________________________________
};




#endif