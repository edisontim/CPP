#include "Data.hpp"

int main()
{
	Data test;

	test.p = 10000;
	test.n = -42;
	test.b = 'a';
	test.s = "This is a lovely struct.";

	std::cout << test.p << " " << test.n << " " << test.b << " " << test.s << std::endl;
	uintptr_t test_p;
	test_p = serialize(&test);
	Data *other_data;
	other_data = deserialize(test_p);	
	std::cout << other_data->p << " " << other_data->n << " " << other_data->b << " " << other_data->s << std::endl;
	return (0);
}