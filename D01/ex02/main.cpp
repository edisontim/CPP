#include <iostream>
#include <string>


int main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string &stringREF = str;

//addresses
	std::cout << "String address" << std::endl;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

//string content
	std::cout << "String content" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}