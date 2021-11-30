#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie = newZombie("Georges");
	Zombie other_zombie("Tom");

	randomChump("Thomas");
	delete new_zombie;
	return (0);
}