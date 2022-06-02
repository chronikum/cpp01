#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Memory address of the string variable " << &string << std::endl;
	std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF " << &stringREF << std::endl;
	std::cout << "This is the value of variable string" << string << std::endl;
	std::cout << "This is the value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "This is the value pointed to by stringREF " << stringREF << std::endl;
}