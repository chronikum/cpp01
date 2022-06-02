#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void	set_name(std::string name);
		void 	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif