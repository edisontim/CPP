#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
private:

public:
	
//		CONSTRUCTORS / DESTRUCTORS 
//___________________________________

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &cpy);
	~ScavTrap();

//		OPERATORS 
//___________________________________

	ScavTrap	&operator=(ScavTrap &srcs);

//		UTILS 
//___________________________________

	void		attack(std::string const &target);
	void		guardGate(void);
};

#endif