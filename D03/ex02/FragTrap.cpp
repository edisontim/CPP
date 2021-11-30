#include "FragTrap.hpp"

//		CONSTRUCTORS / DESTRUCTORS 
//___________________________________

FragTrap::FragTrap(void)
{
	std::cout << this->_name << " FragTrap was created." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Fragtrap "<< this->_name << " was created. 😀" << std::endl;
}

FragTrap::FragTrap(FragTrap &cpy)
{
	this->_name = cpy.getName();
	this->_hit_points = cpy.getHitPoints();
	this->_energy_points = cpy.getEnergyPoints();
	this->_attack_damage = cpy.getAttackDamage();
	std::cout << "Fragtrap "<< this->_name << " was created. 😀" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap "<< this->_name << " was destroyed." << std::endl;
}

//		OPERATORS 
//___________________________________

FragTrap	&FragTrap::operator=(FragTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hit_points = rhs.getHitPoints();
		this->_energy_points = rhs.getEnergyPoints();
		this->_attack_damage = rhs.getAttackDamage();
	}
	return (*this);
}

//		UTILS 
//___________________________________

void		FragTrap::highFivesGuys(void)
{
	std::cout << "Let's high five guys !" << std::endl;
}