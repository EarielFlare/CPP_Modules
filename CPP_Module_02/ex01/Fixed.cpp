#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	//	(1 << bit) = (0000 0001 << bit)
	//	since bit = 8 we have 1 0000 0000 = 256
	//	convert number to desired format by
	//	adding 0000 0000 to the end of number
	//	so, by multiplying int value by 256 we get full value
	this->value = value << bit;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	//	(1 << bit) = (0000 0001 << bit)
	//	since bit = 8 we have 1 0000 0000 = 256
	//	convert number to desired format by
	//	adding 0000 0000 to the end of number
	//	so, by multiplying int value by 256 we get full value
	this->value = (int)roundf(value * (1 << bit));
}

Fixed::Fixed(const Fixed &copy) : value(copy.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//	Copy assignment operator
//Fixed	Fixed::operator=(const Fixed assign) {		//	DO NOT CODE THIS
Fixed	&Fixed::operator=(const Fixed &assign) {	//	USE REFERENCES
	std::cout << "Copy assignment operator called" << std::endl;
//	if (this == &assign)
//		return *this;
	value = assign.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const {
	//	(1 << bit) = (0000 0001 << bit)
	//	since bit = 8 we have 1 0000 0000 = 256
	//	so, by dividing full value by 256 we get float value
	return (float)value / (1 << bit);
}

int		Fixed::toInt( void ) const {
	//	cut of 8 right bits of full value
	return value >> bit;
}

int		Fixed::getRawBits( void ) const { return value; }

void	Fixed::setRawBits( int const raw ) { value = raw; }

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
//	std::cout << "<< operator called" << std::endl;
	out << obj.toFloat();
	return out;
}
