#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
	std::cout << _name << " was born" << std::endl;
}

void Zombie::announce (void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died" << std::endl;
}
