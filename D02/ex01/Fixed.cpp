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

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &rhs)
{
	ostream << (float)rhs.getRawBits() / 256;
	return (ostream);
}

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
	return (this->_value / 256);
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fract_bit);
}