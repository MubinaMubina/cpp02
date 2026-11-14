#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _value(0) 
{
    std::cout << "Default construstor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void)other;
    *this = other; 
}

// operator=(other): print "Copy assignment operator called"
//                   if this is not other: copy other's value
//                   return *this


Fixed &Fixed::operator=(Fixed const &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    (void)other;
    if(*this != other)
        *this = other;
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{ 
    std::cout << "getRawBits member function called" << std::endl;
    return _value; 
}

void Fixed::setRawBits(int const raw)
{ 
    (void)raw;
}
