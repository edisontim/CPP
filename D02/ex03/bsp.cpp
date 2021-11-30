#include "Fixed.hpp"
#include "Point.hpp"

bool	bcp(Point a, Point b, Point c, Point s)
{
	Fixed	biggest_x;
	Fixed	biggest_y;
	Fixed	smallest_x;
	Fixed	smallest_y;
	
	if (a.getX() >= b.getX() && a.getX() >= c.getX())
		biggest_x = a.getX();
	else if (b.getX() >= a.getX() && b.getX() >= c.getX())
		biggest_x = b.getX();
	else
		biggest_x = c.getX();
	if (a.getY() >= b.getY() && a.getY() >= c.getY())
		biggest_y = a.getY();
	else if (b.getY() >= a.getY() && b.getY() >= c.getY())
		biggest_y = b.getY();
	else
		biggest_y = c.getY();
	if (a.getX() <= b.getX() && a.getX() <= c.getX())
		smallest_x = a.getX();
	else if (b.getX() <= a.getX() && b.getX() <= c.getX())
		smallest_x = b.getX();
	else
		smallest_x = c.getX();
	if (a.getY() <= b.getY() && a.getY() <= c.getY())
		smallest_y = a.getY();
	else if (b.getY() <= a.getY() && b.getY() <= c.getY())
		smallest_y = b.getY();
	else
		smallest_y = c.getY();
	if (s.getX() <= biggest_x && s.getX() >= smallest_x)
		if (s.getY() <= biggest_y && s.getY() >= smallest_y)
			return (true);
	return (false);
}