#include "Karen.hpp"

void	karen(Karen new_karen, int i)
{
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			new_karen.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			new_karen.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			new_karen.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			new_karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main(int argc, char *argv[])
{
	Karen new_karen;
	int i;
	std::string level;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (argc != 2)
		return (1);
	level = argv[1];
	i = 0;
	if (argc != 2)
		return (0);
	while (i < 4)
	{
		if (!level.compare(levels[i]))
			break;
		i++;
	}
	karen(new_karen, i);
	return (0);
}