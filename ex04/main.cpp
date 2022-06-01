#include <fstream>
#include <iostream>

/**
 * This function replaces the string string1 by replace2 in the filecontent.
 * It also iterates over the filecontent and replaces a string.
 */
void	erase_and_insert(int *i, std::string *string1, std::string *string2, std::string *file_content)
{
	(*i) = (*file_content).find((*string1));
	while((*i) != -1)
	{
		(*file_content).erase((*i), (*string1).length());
		(*file_content).insert((*i), (*string2));
		(*i) = (*file_content).find((*string1));
	}
}

/**
 * Replaces string in a file and writes it
 * usage: ./replace <filename> <oldstring> <newstring>
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}
	
	std::ifstream		infile(argv[1]);
	std::string	string1(argv[2]);
	std::string	string2(argv[3]);
	char				c;
	int					i = 0;
	
	if (!std::string(argv[1]).length() || !string1.length() || !string2.length() || !infile.good())
	{
		std::cout << "usage: ./replace <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}
	
	std::string		file_content;
	std::ofstream	outfile(std::string(argv[1]) + ".replace");
	
	while (infile.get(c))
	{
		file_content.push_back(c);
	}
	erase_and_insert(&i, &string1, &string2, &file_content);
	outfile << file_content;
	infile.close();
	outfile.close();
	return (0);
}