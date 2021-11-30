#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	
public:

//		CONSTRUCTOR/DESTRUCTOR
//___________________________________
	MutantStack(void){};
	virtual ~MutantStack(){};
	MutantStack(MutantStack const &copy) : std::stack<T>(copy){};

//		UTILS
//___________________________________

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}

//		OPERATORS
//___________________________________
	MutantStack &operator=(const MutantStack &op)
	{
		if (this == &op)
			return (*this);
		std::stack<T>::operator=(op);
		return (*this);
	};
};

#endif
