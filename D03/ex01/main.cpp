#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
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


	std::cout << "___________________________________________" << std::endl;


	ScavTrap t_boogie("Frank");
	ScavTrap hello("Paul");

	t_boogie.attack("Paul");
	hello.takeDamage(0);

	hello.attack("Frank");
	t_boogie.takeDamage(0);

	t_boogie.beRepaired(5);
	hello.beRepaired(5);

	t_boogie.guardGate();
}