#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					_value;
	static int const	_fract_bit = 8;

public:

	Fixed(void);
	Fixed(int value);
	Fixed(Fixed const &srcs);
	~Fixed();

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw); 
};

std::ostream	&operator<<(std::ostream &ostream, Fixed const &rhs);

#endif