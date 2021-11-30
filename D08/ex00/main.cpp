#include "easyfind.hpp"
#include <vector>
#include <array>

int main(void)
{
	std::vector<int> v1; 
	v1.push_back(10);
	v1.push_back(42);
	v1.push_back(19);
	v1.push_back(21);
	v1.push_back(9);
	std::array<int, 5> v2 = { 10, 42, 19, 21, 9}; 

	try
	{
		std::vector<int>::iterator it_find_vec = easyfind(v1, 21);
		std::array<int, 5>::iterator it_find_arr = easyfind(v2, 19);
		std::cout << *it_find_vec << std::endl;
		std::cout << *it_find_arr << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}