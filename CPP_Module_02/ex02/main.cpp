#include <iostream>
#include "Fixed.hpp"

int main( void ) {
/*
//	float	a1 = 12.34f;
//	float	b1 = 21.57f;
	Fixed a(12.34f);
	Fixed b(21.57f);
//	Fixed c = a * b;
//	std::cout << c << std::endl;

	std::cout << a1 << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1 << std::endl;
	std::cout << b1 << std::endl;
	std::cout << ++b1 << std::endl;
	std::cout << b1 << std::endl;

	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b << std::endl;

	std::cout	<< "max(a,b):	" << Fixed::max( a, b ) << std::endl;
	std::cout	<< "min(a,b):	" << Fixed::min( a, b ) << std::endl;
	const Fixed q(12.34f);
	const Fixed w(21.57f);
	std::cout	<< "max(q,w):	" << Fixed::max( q, w ) << std::endl;
	std::cout	<< "min(q,w):	" << Fixed::min( q, w ) << std::endl;
//	std::cout	<< "max(a,b):	" << Fixed::max( a, b ) << std::endl;
//	std::cout	<< "min(a,b):	" << Fixed::min( a, b ) << std::endl;
	std::cout << "-----------------------------------" << std::endl;
*/
/*
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout	<<"a =	" << a << std::endl;
	std::cout	<<"b =	" << b << std::endl;

	bool rez = a == b;
	std::cout	<< "a == b:	"<< rez << std::endl;
	rez = a != b;
	std::cout	<< "a != b:	" << rez << std::endl;
	rez = a > b;
	std::cout	<< "a > b:	" << rez << std::endl;
	a = 6.6f;
	std::cout	<<"a =	" << a << std::endl;
	std::cout	<<"b =	" << b << std::endl;
	rez = a == b;
	std::cout	<< "a == b:	" << rez << std::endl;

	Fixed	c = a + b;
	std::cout	<< "a + b:	" << c << std::endl;
	c = a - b;
	std::cout	<< "a - b:	" << c << std::endl;
	c = a * b;
	std::cout	<< "a * b:	" << c << std::endl;
	c = a / b;
	std::cout	<< "a / b:	" << c << std::endl;

	a = 6;
	std::cout	<< "a =	" << a << std::endl;
	std::cout	<< "++a:	" << ++a << std::endl;

	std::cout	<< "a:	" << a << std::endl;
	std::cout	<< "a++:	" << a++ << std::endl;
	std::cout	<< "a:	" << a << std::endl;

	Fixed const k(2.3f);
	std::cout	<< "a = " << a << "	b = " << b << "	k = " << k << std::endl;
	std::cout	<< "max(k,b):	" << Fixed::max( k, b ) << std::endl;
	std::cout	<< "min(a,b):	" << Fixed::min( a, b ) << std::endl;
	std::cout << "-----------------------------------" << std::endl;
*/
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
