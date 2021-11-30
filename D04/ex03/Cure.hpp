#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	

public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Cure(void);
	Cure(Cure const &src);
	virtual ~Cure(void);


//		OPERATORS 
//___________________________________
	Cure &operator=(Cure const &rhs);

//		UTILS 
//___________________________________
	virtual Cure	*clone() const;
	virtual void use(ICharacter& target);
};



#endif