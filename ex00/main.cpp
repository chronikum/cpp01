#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie;
	new_zombie = newZombie("Passive");
	new_zombie->announce();
	delete new_zombie;
	randomChump("SelfAnnouncer");
	return (0);
}