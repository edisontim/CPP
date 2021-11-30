#include "replace.h"

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ofstream		output_file;
	std::ifstream		input_file;
	std::string			line;
	unsigned long int	i;
	std::string			buffer;

	input_file.open(filename);
	output_file.open(filename + ".replace");
	if (input_file.is_open() && output_file.is_open())
	{
		while(std::getline(input_file, line))
		{
			i = -1;
			buffer = "";
			while (++i < line.length())
				if (line.substr(i, s1.length()) == s1)
				{	
					buffer = line.substr(0, i) + s2;
					buffer += line.substr(i + s1.length(), line.length() - (i + s2.length()));
				}
			if (buffer.length())
				output_file << buffer << std::endl;
			else
				output_file << line << std::endl;
		}
	}
}

int main(int argc, char *argv[])
{
	
	std::string			s1;
	std::string			s2;
	std::string			filename;
	std::string			buffer;
	
	if (argc != 4)
		return (0);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (!s1.length() || !s2.length() || !filename.length())
		return (1);
	replace(filename, s1, s2);
	return (0);
}