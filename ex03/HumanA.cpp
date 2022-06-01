#include "HumanA.hpp"

/**
 * Create human A with weapon and name
 */
HumanA::HumanA(std::string name, Weapon &weapon):_name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
}

/**
 * Attack with weapon
 */
void HumanA::attack(void) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl ;
}