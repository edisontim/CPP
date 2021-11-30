#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <stdlib.h>

class Span
{
private:

	unsigned int		_N;
	std::vector<int>	_storage;
	unsigned int		_occupied_cap;

public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	Span(void);
	Span(unsigned int N);
	~Span(void);

//		OPERATORS
//___________________________________
	Span	&operator=(Span const &rhs);

//		UTILS
//___________________________________
	void						addNumber(int num);
	unsigned int				shortestSpan(void) const;
	unsigned int				longestSpan(void) const;
	void						addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
	std::vector<int>::iterator	begin(void);
	std::vector<int>::iterator	end(void);
};


#endif

