#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	

public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Ice(void);
	Ice(Ice const &src);
	virtual ~Ice(void);


//		OPERATORS 
//___________________________________
	Ice &operator=(Ice const &rhs);

//		UTILS 
//___________________________________
	virtual Ice	*clone() const;
	virtual void use(ICharacter& target);
};



#endif