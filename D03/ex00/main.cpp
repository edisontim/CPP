#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap georges("Georges");
	ClapTrap tom("Tom");

	tom.attack("Georges");
	georges.takeDamage(0);

	georges.attack("Tom");
	tom.takeDamage(0);

	tom.beRepaired(5);
	georges.beRepaired(5);
}