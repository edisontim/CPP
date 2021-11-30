#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int					_value;
	static int const	_fract_bit = 8;

public:

	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &srcs);
	~Fixed();

	//	OPERATORS 
	//___________________________________
	Fixed	&operator=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);
	Fixed	const &operator++(void);
	Fixed	const operator++(int blank);
	Fixed	const &operator--(void);
	Fixed	const operator--(int blank);

	//	UTILS
	//___________________________________
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
	static	Fixed	const &min(Fixed const &a, Fixed const &b);
	static	Fixed	const &max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &ostream, Fixed const &rhs);

#endif