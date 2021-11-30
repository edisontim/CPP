#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"


bool	bcp(Point a, Point b, Point c, Point s);

int main(void)
{
	Point a(Fixed(0.000f), Fixed(1.000f));
	Point b(Fixed(1.000f), Fixed(0.000f));
	Point c(Fixed(0.000f), Fixed(0.000f));
	Point s(Fixed(0.200f), Fixed(0.200f));
	std::cout << bcp(a, b, c, s) << std::endl;

	std::cout << std::endl << std::endl;
	Point d(Fixed(2.000f), Fixed(2.000f));
	Point e(Fixed(1.000f), Fixed(1.000f));
	Point f(Fixed(3.000f), Fixed(1.000f));
	Point t(Fixed(0.00f), Fixed(0.000f));
	std::cout << bcp(d, e, f, t) << std::endl;
}