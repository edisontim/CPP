#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

typedef struct s_data
{
	uintptr_t	p;
	int			n;
	char		b;
	std::string	s;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif