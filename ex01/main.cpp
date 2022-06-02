#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		Zombie *horde = zombieHorde(10, "YodaZombie");
		Zombie *horde2 = zombieHorde(10, "PikachuZombie");

		delete [] horde;
		delete [] horde2;
	}
	if (argc == 2)
	{
		int number = atoi(argv[1]);
		if (number > 0)
		{
			Zombie *horde = zombieHorde(number, "RandomZombie");
			delete [] horde;	
		}
		else
			return (1);
	}
	return (0);
}