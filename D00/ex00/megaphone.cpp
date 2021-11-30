#include <iostream>
#include <cctype>

char	*ft_toupper(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = toupper(str[i]);
	return (str);
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
		std::cout << ft_toupper(argv[i++]);
	std::cout << std::endl;
	return (0);
}