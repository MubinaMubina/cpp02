#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(Fixed const &other) : _value(0)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	else
		_value = other._value;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return _value > rhs._value;
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return _value < rhs._value;
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return _value >= rhs._value;
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return _value <= rhs._value;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return _value == rhs._value;
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return _value != rhs._value;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_value + rhs._value);
	return result;
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_value - rhs._value);
	return result;
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits((int)(((long)_value * rhs._value) >> _fractionalBits));
	return result;
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits((int)(((long)_value * (1 << _fractionalBits)) / rhs._value));
	return result;
}

Fixed &Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	_value++;
	return old;
}

Fixed &Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	_value--;
	return old;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}
