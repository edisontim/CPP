#include <iostream>
#include <string>
#include <iomanip>

bool is_integer(const std::string & s)
{
	if(!s.length() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) 
		return false;

	char *p;
	strtol(s.c_str(), &p, 10);
	return (*p == 0);
}

bool is_double(const std::string &s)
{
	if(!s.length() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) 
		return false;

	char *p;
	strtod(s.c_str(), &p);
	return (*p == 0);
}

bool is_float(std::string s)
{
	if(!s.length() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) 
		return false;

	char *p;
	strtof(s.c_str(), &p);
	if (*p == 'f' && *(p + 1) == 0)
		return true;
	else
		return false;
}

int main(int argc, char *argv[])
{
	float	to_print_f;
	double	to_print_d;
	int		to_print_i;

	if (argc != 2)
		return (1);
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	if (!std::string(argv[1]).compare("nan") || !std::string(argv[1]).compare("-inf") || !std::string(argv[1]).compare("+ inf"))
	{
		std::string print_c_i = "impossible";
		std::string	print_f_d = argv[1];
		std::cout << "char: " << print_c_i << std::endl;
		std::cout << "int: " << print_c_i << std::endl;
		std::cout << "float: " << print_f_d << "f"<< std::endl;
		std::cout << "double: " << print_f_d << std::endl;
	}
	else if (!std::string(argv[1]).compare("nanf") || !std::string(argv[1]).compare("-inff") || !std::string(argv[1]).compare("+ inff"))
	{
		std::string print_c_i = "impossible";
		std::string	print_f = argv[1];
		std::string print_d = print_f.substr(0, print_f.length() -1);
		std::cout << "char: " << print_c_i << std::endl;
		std::cout << "int: " << print_c_i << std::endl;
		std::cout << "float: " << print_f << std::endl;
		std::cout << "double: " << print_d << std::endl;
	}
	else if (is_integer(argv[1]))
	{
		to_print_i = atoi(argv[1]);
		to_print_d = static_cast<double>(to_print_i);
		to_print_f = static_cast<float>(to_print_i);
		if (to_print_i >= 32 && to_print_i <= 126)
			std::cout << "char: " << static_cast<char>(to_print_i) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << to_print_i << std::endl;
		std::cout << "float: " << to_print_f << std::setprecision(1) << "f"<< std::endl;
		std::cout << "double: " << to_print_d << std::endl;
	}
	else if (is_float(argv[1]))
	{
		to_print_f = strtof(argv[1], NULL);
		to_print_i = (int)to_print_f;
		to_print_d = (double)to_print_f;
		if (to_print_f >= 32.00 && to_print_f <= 126.00)
			std::cout << "char: " << (char)to_print_f << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << to_print_i << std::endl;
		std::cout << "float: " << to_print_f << std::setprecision(1) << "f"<< std::endl;
		std::cout << "double: " << to_print_d << std::endl;	
	}
	else if (is_double(argv[1]))
	{
		to_print_d = strtod(argv[1], NULL);
		to_print_i = static_cast<int>(to_print_d);
		to_print_f = static_cast<float>(to_print_d);
		if (to_print_d >= 32.00 && to_print_i <= 126.00)
			std::cout << "char: " << static_cast<char>(to_print_d) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << to_print_i << std::endl;
		std::cout << "float: " << to_print_f << std::setprecision(1) << "f"<< std::endl;
		std::cout << "double: " << to_print_d << std::endl;
	}
	else
	return (0);
}