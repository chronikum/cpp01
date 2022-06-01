#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		const std::string& getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif