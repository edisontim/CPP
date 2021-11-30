#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fract_bit;
}

Fixed::Fixed(const float value) : _value(value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << this->_fract_bit)));
}

Fixed::Fixed(Fixed const &srcs)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = srcs.getRawBits();
}

//	OPERATORS 
//___________________________________

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	const &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	const Fixed::operator++(int blank)
{
	Fixed temp(*this);
	++*this;
	return (temp);
}

Fixed	const &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	const Fixed::operator--(int blank)
{
	Fixed temp(*this);
	this->_value--;
	return (temp);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &rhs)
{
	ostream << (float)rhs.getRawBits() / 256;
	return (ostream);
}

//	UTILS 
//___________________________________

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / 256);
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fract_bit);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
