#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:

	
//		CONSTRUCTORS / DESTRUCTORS 
//___________________________________

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &cpy);
	~FragTrap();

//		OPERATORS 
//___________________________________

	FragTrap	&operator=(FragTrap &rhs);

//		UTILS 
//___________________________________
	void		highFivesGuys(void);
};


#endif