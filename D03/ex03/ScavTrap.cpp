#include "ScavTrap.hpp"


//		CONSTRUCTORS / DESTRUCTORS 
//___________________________________

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap "<< this->_name<< " was created."<< std::endl;
}

ScavTrap::ScavTrap(void)
{
	this->setName("Nameless");
	std::cout << this->getName() << " ScavTrap was created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &cpy)
{
	this->_name = cpy.getName();
	this->_hit_points = cpy.getHitPoints();
	this->_energy_points = cpy.getEnergyPoints();
	this->_attack_damage = cpy.getAttackDamage();
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< this->_name << " was destroyed." << std::endl;
}

//		OPERATORS 
//___________________________________

ScavTrap &ScavTrap::operator=(ScavTrap &srcs)
{
	if (this != &srcs)
	{
		this->_name = srcs.getName();
		this->_hit_points = srcs.getHitPoints();
		this->_energy_points = srcs.getEnergyPoints();
		this->_attack_damage = srcs.getAttackDamage();
	}
	return (*this);
}

//		UTILS 
//___________________________________

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attacked " << target 
	<< " causing "<< this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered gate guarding mode." << std::endl;
}