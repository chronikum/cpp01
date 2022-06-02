#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
	private:
		void	_debug( void );
		void	_info( void );
		void	_error( void );
		void	_warning( void );
};