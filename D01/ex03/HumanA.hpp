#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
private:
	
	std::string	_name;
	Weapon		&weapon;
	
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack(void);
	void	setWeapon(Weapon &weapon);

};



#endif