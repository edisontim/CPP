#include "Zombie.hpp"

int main(void)
{
	int	i;
	Zombie *horde = zombieHorde(10, "Georges");

	i = -1;
	while (++i < 10)
		horde[i].announce();
	delete [] horde;
	return (0);
}