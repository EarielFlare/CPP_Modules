#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value) {	this->value = value << bit; }

Fixed::Fixed(const float value) { this->value = (int)roundf(value * (1 << bit)); }

Fixed::Fixed(const Fixed &copy) : value(copy.value) {}

Fixed::~Fixed() {}

Fixed	&Fixed::operator=(const Fixed &assignment) {
//	if (this == &assignment)
//		return *this;
	value = assignment.getRawBits();
	return *this;
}

float	Fixed::toFloat		( void ) const { return (float)value / (1 << bit); }

int		Fixed::toInt		( void ) const { return value >> bit; }

int		Fixed::getRawBits	( void ) const { return value; }

void	Fixed::setRawBits	( int const raw ) { value = raw; }

/*	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	*/

bool	Fixed::operator==	(const Fixed &object) {
	return this->getRawBits() == object.getRawBits();
}

bool	Fixed::operator!=	(const Fixed &object) {
	return this->getRawBits() != object.getRawBits();
}

bool	Fixed::operator<	(const Fixed &object) {
	return this->getRawBits() < object.getRawBits();
}

bool	Fixed::operator>	(const Fixed &object) {
	return this->getRawBits() > object.getRawBits();
}

bool	Fixed::operator<=	(const Fixed &object) {
	return this->getRawBits() <= object.getRawBits();
}

bool	Fixed::operator>=	(const Fixed &object) {
	return this->getRawBits() >= object.getRawBits();
}

/*	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	*/

Fixed	Fixed::operator+	(const Fixed &object) {
//	return Fixed(this->toFloat() + object.toFloat());
	Fixed val(*this);
	val.setRawBits(this->getRawBits() + object.getRawBits());
	return (val);

}

Fixed	Fixed::operator-	(const Fixed &object) {
//	return Fixed(this->toFloat() - object.toFloat());
	Fixed val(*this);
	val.setRawBits(this->getRawBits() - object.getRawBits());
	return (val);
}

Fixed	Fixed::operator*	(const Fixed &object) {
	//	we can use toFloat method
//	return Fixed(this->toFloat() * object.toFloat());
	//	or getRawBits method and work with long type
	Fixed val(*this);
	long tmp1, tmp2;
	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)object.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::bit));
	return (val);

}

Fixed	Fixed::operator/	(const Fixed &object) {
	//	we can use toFloat method
//	return Fixed(this->toFloat() / object.toFloat());
	//	or getRawBits method and work with long type
	Fixed val(*this);
	long tmp1, tmp2;
	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)object.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::bit)) / tmp2);
	return (val);
}

/*	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	*/

//	++a (prefix) operations
//Fixed	&Fixed::operator++() {
Fixed	Fixed::operator++	() {
	this->value++;
//	this->value += (1 << bit);
	return *this;
}

//	++a (prefix) operations
//Fixed	&Fixed::operator--() {
Fixed	Fixed::operator--	() {
	this->value--;
//	this->value -= (1 << bit);
	return *this;
}

//	a++ (postfix) operations
Fixed	Fixed::operator++	(int) {
	Fixed prev(*this);
	++(*this);
	return prev;
}

//	a++ (postfix) operations
Fixed	Fixed::operator--	(int) {
	Fixed prev(*this);
	--(*this);
	return prev;
}

Fixed		&Fixed::min		(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

Fixed		&Fixed::max		(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed	&Fixed::min		(const Fixed &a, const Fixed &b) {
//	return (a < b) ? a : b;		//	works if we have external operator<
	//	so we have to use class method getRawBits
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed	&Fixed::max		(const Fixed &a, const Fixed &b) {
//	return (a > b) ? a : b;		//	works if we have external operator>
	//	so we have to use class method getRawBits
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

std::ostream &operator<<	(std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

//	External operator<
//	bool	operator<	(const Fixed &qwert, const Fixed &object) {
//		return qwert.getRawBits() < object.getRawBits();
//	}

//	External operator>
//	bool	operator>	(const Fixed &qwert, const Fixed &object) {
//		return qwert.getRawBits() > object.getRawBits();
//	}
