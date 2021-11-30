#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->_name = "Nameless";
	std::cout << this->_name << " ClapTrap was created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &cpy)
{
	this->_name = cpy.getName();
	this->_hit_points = cpy.getHitPoints();
	this->_energy_points = cpy.getEnergyPoints();
	this->_attack_damage = cpy.getAttackDamage();
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " was destroyed." << std::endl;
}

//		OPERATORS 
//___________________________________

ClapTrap &ClapTrap::operator=(ClapTrap &rhs)
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

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacked " << target 
	<< " causing "<< this->_attack_damage << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount 
	<< " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " got repaired and got back " 
	<< amount << " hit points!" << std::endl;
}


//		GETTERS
//___________________________________

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void)
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->_attack_damage);
}

//		SETTERS
//___________________________________

void			ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void			ClapTrap::setHitPoints(unsigned int hp)
{
	this->_hit_points = hp;
}

void			ClapTrap::setEnergyPoints(unsigned int ep)
{
	this->_energy_points = ep;
}

void			ClapTrap::setAttackDamage(unsigned int ad)
{
	this->_attack_damage = ad;
}