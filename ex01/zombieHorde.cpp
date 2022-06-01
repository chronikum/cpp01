#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie* horde = new Zombie[N];
	
	while (N > i)
	{
		horde[i].set_name(name);
		horde[i].announce();
		i++;
	}
	return (horde);
}