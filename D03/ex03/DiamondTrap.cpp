#include "DiamondTrap.hpp"

//		CONSTRUCTORS / DESTRUCTOR
//___________________________________
DiamondTrap::DiamondTrap(void) : _name("Nameless")
{
	std::cout << this->_name << " DiamondTrap was created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + "_ClapTrap"), ScavTrap(name), FragTrap(name)
{
	ClapTrap::_name = name + "_ClapTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap " << this->_name << " was created." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &cpy)
{
	this->_name = cpy.getName();
	this->_hit_points = cpy.getHitPoints();
	this->_energy_points = cpy.getEnergyPoints();
	this->_attack_damage = cpy.getAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " was destroyed." << std::endl;
}

//		OPERATORS
//___________________________________

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs)
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

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is : " << this->_name << std::endl;
	std::cout << "My ClapTrap name is : " << ClapTrap::_name << std::endl;
}