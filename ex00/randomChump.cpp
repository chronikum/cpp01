#include "Zombie.hpp"

/**
 * Construct new zombie with name
 * and announce
 */
void randomChump( std::string name )
{
	Zombie newZombie(name);
	newZombie.announce();
	return ;
}