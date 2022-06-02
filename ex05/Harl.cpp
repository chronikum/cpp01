#include "Harl.hpp"

#include <iostream>

Harl::Harl()
{
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;;
}

/**
 * Let Harl complain in different levels with
 * pointer to member function
 */
void	Harl::complain( std::string level )
{
	int i = 0;
	
	void (Harl::*functions[]) (void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	
	std::string	_levels[] = {
		"debug", 
		"info", 
		"warning", 
		"error"
	};


	while (i < 4)
	{
		if (level == _levels[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
	std::cout << "I don't know what to say about " << level << std::endl;;
}