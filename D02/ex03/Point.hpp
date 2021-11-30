#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <string>
#include <iostream>

class Point
{
private:

	Fixed const	_x;
	Fixed const	_y;

public:

	//	CONSTRUCTORS/DESTRUCTOR 
	//___________________________________
	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const &cpy);
	~Point();

	//	OPERATORS 
	//___________________________________
	Point	&operator=(Point const &rhs);

	//	UTILS 
	//___________________________________
	

	//	GETTERS/SETTERS 
	//___________________________________
	Fixed	const getX(void) const;
	Fixed	const getY(void) const;
};


#endif