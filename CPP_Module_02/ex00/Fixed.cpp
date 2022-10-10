#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//	copy constructor
Fixed::Fixed(const Fixed &copy) : value(copy.value) {
	std::cout << "Copy constructor called" << std::endl;
}

//	copy assignment operator overload
Fixed &Fixed::operator= (const Fixed &assign) {
	std::cout << "Copy assignment operator called" << std::endl;
//	if (this == &assign)
//		return *this;
	value = assign.getRawBits();
	//	return class object by this pointer (*this)
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
