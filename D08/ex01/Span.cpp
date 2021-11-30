#include "Span.hpp"

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
Span::Span(void) : _N(0), _occupied_cap(0)
{
}

Span::~Span(void)
{
}

Span::Span(unsigned int N) : _N(N), _occupied_cap(0)
{
}

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_storage = rhs._storage;
		this->_N = rhs._N;
		this->_occupied_cap = rhs._occupied_cap;
	}
	return (*this);
}

//		UTILS
//___________________________________

void	Span::addNumber(int num)
{
	if (this->_occupied_cap < _N)
	{
		this->_storage.push_back(num);
		this->_occupied_cap++;
	}
	else
		throw std::exception();
}

void	Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	std::vector<int>::iterator iter = first;
	int i;

	i = 0;
	while (iter != last)
	{
		i++;
		iter++;
	}
	if (_occupied_cap + i > _N)
		throw std::exception();
	else
	{
		_storage.insert(_storage.end() - 2, first, last);
	}
	_occupied_cap += i;
}

std::vector<int>::iterator	Span::begin(void)
{
	return (_storage.begin());
}

std::vector<int>::iterator	Span::end(void)
{
	return (_storage.end());
}

unsigned int	Span::shortestSpan(void) const
{
	unsigned int	diff;
	std::vector<const int>::iterator jt;
	
	std::vector<const int>::iterator it = this->_storage.begin();
	diff = abs(*it - *(it + 1));
	while (it != this->_storage.end() - 1)
	{
		jt = it + 1;
		while (jt != this->_storage.end())
		{
			if (static_cast<unsigned int>(abs(*it - *jt)) < diff)
				diff = abs(*it - *jt);
			jt++;
		}
		it++;
	}
	return (diff);
}

unsigned int	Span::longestSpan(void) const
{
	if (!this->_occupied_cap)
		return (0);
	if (this->_occupied_cap == 1)
		return (*(this->_storage.begin()));
	std::pair<std::vector<const int>::iterator, std::vector<const int>::iterator> max_min = std::minmax_element(this->_storage.begin(), this->_storage.end());
	return (*max_min.second - *max_min.first);
}

