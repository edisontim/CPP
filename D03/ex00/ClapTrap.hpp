#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	
	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap &cpy);
	~ClapTrap();

//		OPERATORS 
//___________________________________

	ClapTrap &operator=(ClapTrap &rhs);


//		GETTERS
//___________________________________
	std::string		getName(void);
	unsigned int	getHitPoints(void);
	unsigned int	getEnergyPoints(void);
	unsigned int	getAttackDamage(void);

//		UTILS
//___________________________________
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};



#endif