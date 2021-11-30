#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>


template <typename T>
typename T::iterator easyfind(T &container, int find)
{
	int	i;

	i = 0;
	typename T::iterator itpos;
	itpos = std::find(container.begin(), container.end(), find);
	if (itpos != container.end())
		return (itpos);
	else
		throw std::exception();
}
#endif