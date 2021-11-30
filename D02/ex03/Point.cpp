#include "Point.hpp"

//	CONSTRUCTORS/DESTRUCTOR 
//___________________________________
Point::Point(void) : _x(Fixed(0.0000f)), _y(Fixed(0.0000f))
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
}

Point::Point(Point const &cpy) : _x(cpy._x), _y(cpy._y) 
{
}

Point::~Point()
{
}


//	OPERATORS 
//___________________________________
Point &Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

//	GETTERS/SETTERS 
//___________________________________
Fixed const Point::getX(void) const
{
	return (this->_x);
}

Fixed const Point::getY(void) const
{
	return (this->_y);
}