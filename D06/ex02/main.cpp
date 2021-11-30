#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

Base	*generate(void)
{
	srand(time(NULL));
	int	rand_num;
	Base	*point_b;
	rand_num = rand() % 3;
	switch (rand_num)
	{
		case 0:
			point_b = new A();
			break;
		case 1:
			point_b = new B();
			break;
		case 2:
			point_b = new C();
			break;
	}
	return (point_b);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	std::string to_print;
	try
	{
		Base &test = dynamic_cast<A &>(p);
		static_cast<void>(test);
		to_print = "A";
	}
	catch (std::bad_cast)
	{
		to_print = "";
	}
	if (to_print[0] == 'A')
	{
		std::cout << to_print << std::endl;
	}

	try
	{
		Base &test = dynamic_cast<B &>(p);
		static_cast<void>(test);
		to_print = "B";
	}
	catch (std::bad_cast)
	{
		to_print = "";
	}
	if (to_print[0] == 'B')
	{
		std::cout << to_print << std::endl;
	}

	try
	{
		Base &test = dynamic_cast<C &>(p);
		static_cast<void>(test);
		to_print = "C";
	}
	catch (std::bad_cast)
	{
		to_print = "";
	}
	if (to_print[0] == 'C')
	{
		std::cout << to_print << std::endl;
	}	
}

int main(void)
{
	A test_a;
	A &test_ref = test_a;
	Base *test = generate();
	identify(test);
	identify(test_ref);
	delete test;
}