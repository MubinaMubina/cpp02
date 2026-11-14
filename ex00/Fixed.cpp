#include "Fixed.hpp"
#include <iostream>

// TODO: implement (each special member prints its message)

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(Fixed const &other) { (void)other; }

Fixed &Fixed::operator=(Fixed const &other) { (void)other; return *this; }

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const { return _value; }

void Fixed::setRawBits(int const raw) { (void)raw; }
