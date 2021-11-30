#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{

protected:
	
	std::string type;
public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	AMateria(std::string const & type);
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(AMateria const &src);

//		OPERATORS
//___________________________________
	AMateria &operator=(AMateria &rhs);


//		UTILS
//___________________________________
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif