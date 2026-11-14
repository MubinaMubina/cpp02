#include "Fixed.hpp"
#include <cmath>

// A fixed-point number is an integer scaled by 2^8 (256):
// raw value = real value * 256

// Fixed(): value = 0; print "Default constructor called"
Fixed::Fixed(void) : _value(0) {}

// Fixed(int n): print "Int constructor called"
//               value = n shifted left by fractionalBits
Fixed::Fixed(int const n) { (void)n; }

// Fixed(float f): print "Float constructor called"
//                 value = roundf(f * 2^fractionalBits)   (2^bits == 1 << bits)
Fixed::Fixed(float const f) { (void)f; }

// Fixed(other): print "Copy constructor called"; copy other's value
Fixed::Fixed(Fixed const &other) { (void)other; }

// operator=(other): print "Copy assignment operator called"
//                   if this is not other: copy other's value
//                   return *this
Fixed &Fixed::operator=(Fixed const &other) { (void)other; return *this; }

// ~Fixed(): print "Destructor called"
Fixed::~Fixed(void) {}

// getRawBits(): return value
int Fixed::getRawBits(void) const { return _value; }

// setRawBits(raw): value = raw
void Fixed::setRawBits(int const raw) { (void)raw; }

// toFloat(): return (float)value / 2^fractionalBits
float Fixed::toFloat(void) const { return 0; }

// toInt(): return value shifted right by fractionalBits
int Fixed::toInt(void) const { return 0; }

// operator<<(os, fixed): write fixed.toFloat() to os; return os
//                        (non-member function)
std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	(void)fixed;
	return os;
}
