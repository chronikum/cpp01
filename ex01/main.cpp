#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(10, "YodaZombie");
	Zombie *horde2 = zombieHorde(10, "PikachuZombie");

	delete [] horde;
	delete [] horde2;

	return (0);
}