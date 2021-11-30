#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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


	std::cout << "___________________________________________" << std::endl << std::endl;


	ScavTrap t_boogie("Frank");
	ScavTrap hello("Paul");

	t_boogie.attack("Paul");
	hello.takeDamage(0);

	hello.attack("Frank");
	t_boogie.takeDamage(0);

	t_boogie.beRepaired(5);
	hello.beRepaired(5);

	t_boogie.guardGate();


	std::cout << "___________________________________________" << std::endl << std::endl;


	FragTrap	greg("Greg");
	FragTrap	thomas("tom");

	greg.attack("tom");
	thomas.takeDamage(0);

	thomas.attack("Greg");
	greg.takeDamage(0);

	thomas.beRepaired(5);
	greg.beRepaired(5);

	thomas.highFivesGuys();
}