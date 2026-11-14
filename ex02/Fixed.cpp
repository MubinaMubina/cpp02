#include "Fixed.hpp"
#include <cmath>

// A fixed-point number is an integer scaled by 2^8 (256):
// raw value = real value * 256

// ---- canonical form + conversions (same as ex01) ----

// Fixed(): value = 0; print "Default constructor called"
Fixed::Fixed(void) : _value(0) {}

// Fixed(int n): value = n << fractionalBits
Fixed::Fixed(int const n) { (void)n; }

// Fixed(float f): value = roundf(f * 2^fractionalBits)
Fixed::Fixed(float const f) { (void)f; }

// Fixed(other): copy other's value
Fixed::Fixed(Fixed const &other) { (void)other; }

// operator=(other): if this is not other, copy value; return *this
Fixed &Fixed::operator=(Fixed const &other) { (void)other; return *this; }

// ~Fixed(): print "Destructor called"
Fixed::~Fixed(void) {}

// getRawBits(): return value
int Fixed::getRawBits(void) const { return _value; }

// setRawBits(raw): value = raw
void Fixed::setRawBits(int const raw) { (void)raw; }

// toFloat(): return (float)value / 2^fractionalBits
float Fixed::toFloat(void) const { return 0; }

// toInt(): return value >> fractionalBits
int Fixed::toInt(void) const { return 0; }

// ---- comparisons: compare this->value with rhs.value, return the bool ----
// (!= can be !(==), <= can be !(>), and so on)

bool Fixed::operator>(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator<(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator>=(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator<=(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator==(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator!=(Fixed const &rhs) const { (void)rhs; return false; }

// ---- arithmetic ----

// +, -: result raw = this->value (+/-) rhs.value
//       build a Fixed from that raw value (use setRawBits)
Fixed Fixed::operator+(Fixed const &rhs) const { (void)rhs; return Fixed(); }
Fixed Fixed::operator-(Fixed const &rhs) const { (void)rhs; return Fixed(); }

// *: result raw = (this->value * rhs.value) / 256
//    the product has 16 fractional bits, so shift back by 8
//    (alternative: multiply as floats, build a Fixed from the float)
//    watch for overflow; widening to long long is one option
Fixed Fixed::operator*(Fixed const &rhs) const { (void)rhs; return Fixed(); }

// /: result raw = (this->value * 256) / rhs.value
//    pre-scale the numerator so the fractional bits survive
//    dividing by 0 is allowed to crash
Fixed Fixed::operator/(Fixed const &rhs) const { (void)rhs; return Fixed(); }

// ---- increment / decrement (epsilon = 1/256, i.e. a raw step of 1) ----

// pre-increment  (++x): value += 1; return *this (by reference)
Fixed &Fixed::operator++(void) { return *this; }

// post-increment (x++): copy = *this; value += 1; return copy (by value)
//                       takes an unused int parameter
Fixed Fixed::operator++(int) { return *this; }

// pre-decrement  (--x): value -= 1; return *this
Fixed &Fixed::operator--(void) { return *this; }

// post-decrement (x--): copy = *this; value -= 1; return copy
Fixed Fixed::operator--(int) { return *this; }

// ---- min / max: return a reference to the original object, not a copy ----
// write both the non-const and const overloads with the same logic

// min(a, b): if a < b return a else return b
Fixed &Fixed::min(Fixed &a, Fixed &b) { (void)b; return a; }
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) { (void)b; return a; }

// max(a, b): if a > b return a else return b
Fixed &Fixed::max(Fixed &a, Fixed &b) { (void)b; return a; }
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) { (void)b; return a; }

// operator<<(os, fixed): write fixed.toFloat() to os; return os
std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	(void)fixed;
	return os;
}
