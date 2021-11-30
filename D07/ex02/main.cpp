#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<std::string> test(3);
	test[0] = "Bonjour";
	test[1] = "comment";
	test[2] = "va ?";

	Array<int> test2(2);
	int	i;

	test2[0] = 42;
	test2[1] = 19;

	i = 0;
	while (i < 3)
		std::cout << test[i++] << std::endl;
	std::cout << test2[0] << std::endl;
	std::cout << test2[1] << std::endl;
}