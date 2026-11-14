#include "Fixed.hpp"
#include <cmath>

// TODO: implement everything below

Fixed::Fixed(void) : _value(0) {}
Fixed::Fixed(int const n) { (void)n; }
Fixed::Fixed(float const f) { (void)f; }
Fixed::Fixed(Fixed const &other) { (void)other; }
Fixed &Fixed::operator=(Fixed const &other) { (void)other; return *this; }
Fixed::~Fixed(void) {}

int		Fixed::getRawBits(void) const { return _value; }
void	Fixed::setRawBits(int const raw) { (void)raw; }
float	Fixed::toFloat(void) const { return 0; }
int		Fixed::toInt(void) const { return 0; }

bool Fixed::operator>(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator<(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator>=(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator<=(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator==(Fixed const &rhs) const { (void)rhs; return false; }
bool Fixed::operator!=(Fixed const &rhs) const { (void)rhs; return false; }

Fixed Fixed::operator+(Fixed const &rhs) const { (void)rhs; return Fixed(); }
Fixed Fixed::operator-(Fixed const &rhs) const { (void)rhs; return Fixed(); }
Fixed Fixed::operator*(Fixed const &rhs) const { (void)rhs; return Fixed(); }
Fixed Fixed::operator/(Fixed const &rhs) const { (void)rhs; return Fixed(); }

Fixed &Fixed::operator++(void) { return *this; }
Fixed Fixed::operator++(int) { return *this; }
Fixed &Fixed::operator--(void) { return *this; }
Fixed Fixed::operator--(int) { return *this; }

Fixed &Fixed::min(Fixed &a, Fixed &b) { (void)b; return a; }
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) { (void)b; return a; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { (void)b; return a; }
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) { (void)b; return a; }

std::ostream &operator<<(std::ostream &os, Fixed const &fixed) {
	(void)fixed;
	return os;
}
