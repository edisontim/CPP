#include "Span.hpp"

void output(Span &test)
{
	std::vector<int>::iterator begin;
	std::vector<int>::iterator end;

	begin = test.begin();
	end = test.end();

	std::cout << "Original vector contains :" << std::endl;
	while (begin != end)
	{
		std::cout << "Original vector |" << *begin <<  "|" << std::endl;
		begin++;
	}
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	
	Span sp2 = Span(20000);
	sp2.addNumber(-20);
	sp2.addNumber(-1);
	sp2.addNumber(-33);
	sp2.addNumber(-273);
	sp2.addNumber(-52);
	sp2.addNumber(-20);
	sp2.addNumber(-31);
	sp2.addNumber(-21);
	
	
	output(sp2);
	int i = 0;

	while (i < 11)
	{
		std::vector<int>::iterator begin = sp2.begin();
		std::vector<int>::iterator end = sp2.end();
		sp2.addNumbers(begin ,end);
		i++;
	}
	output(sp2);


	std::cout << "SP shortest and longest span" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "SP2 shortest and longest span" << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}
