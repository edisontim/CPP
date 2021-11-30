#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
	T				*_arr;
	int	_size;
public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Array(void)
	{
		this->_arr = new T[0];
		_arr[0] = NULL;
		this->_size = 0;
	}

	Array(int size)
	{
		this->_arr = new T[size];
		this->_size = size;
	}

	Array(Array const &cpy)
	{
		int	i;

		i = 0;

		delete [] this->_arr;
		this->_arr = new T[cpy._size];
		while (i < cpy._size)
		{
			this->_arr[i] = cpy._arr[i];
			i++;
		}
		this->_size = cpy._size;
	}

	~Array()
	{
		delete [] this->_arr;	
	}

//		OPERATORS
//___________________________________
	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			int	i;

			i = 0;
			delete [] this->_arr;
			this->_arr = new T[rhs._size];
			while (i < rhs._size)
			{
				this->_arr[i] = rhs._arr[i];
				i++;
			}
			this->_size = rhs._size;
		}
	}

	T &operator[](int i)
	{
		try 
		{
			if (i >= this->_size)
				throw std::exception();
		}
		catch (std::exception e)
		{
			std::cerr << e.what() << std::endl;
		}
		return (_arr[i]);

	}

//		UTILS
//___________________________________
	unsigned int	size() const
	{
		return (this->_size);
	}

};

#endif