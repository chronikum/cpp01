#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie created" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died" << std::endl;
}
