#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap bro("Georges");

	std::cout << bro.getHitPoints() << std::endl;
	std::cout << bro.getEnergyPoints() << std::endl;
	std::cout << bro.getAttackDamage() << std::endl;
	bro.guardGate();
	bro.highFivesGuys();
	bro.whoAmI();
}