#include "Fixed.hpp"
#include <cmath>

// TODO: implement (each constructor/destructor/assignment prints its message)

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(int const n) { (void)n; }

Fixed::Fixed(float const f) { (void)f; }

Fixed::Fixed(Fixed const &other) { (void)other; }

Fixed &Fixed::operator=(Fixed const &other) { (void)other; return *this; }

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const { return _value; }

void Fixed::setRawBits(int const raw) { (void)raw; }

float Fixed::toFloat(void) const { return 0; }

int Fixed::toInt(void) const { return 0; }

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	(void)fixed;
	return os;
}
