#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T *array, int length, void (*f)(T &))
{
	int	i;
	
	i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}

#endif