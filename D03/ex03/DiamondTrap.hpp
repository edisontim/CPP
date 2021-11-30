#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:

	std::string _name;

public:

//		CONSTRUCTORS / DESTRUCTOR
//___________________________________
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &cpy);
	~DiamondTrap();

//		SETTERS
//___________________________________

//		OPERATORS
//___________________________________
DiamondTrap &operator=(DiamondTrap &rhs);

//		UTILS
//___________________________________
void	attack(std::string const &target);
void	whoAmI(void);
};



#endif