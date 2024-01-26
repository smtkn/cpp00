#include "Phonebook.hpp"

int	main(void)
{
	Phonebook 	ph1;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph1.add();
		else if (str == "SEARCH")
			ph1.search();
		else
			std::cout << "Can Use: 'ADD', 'SEARCH', 'EXIT'\n";
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
