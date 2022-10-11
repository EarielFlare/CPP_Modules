#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;					//	Copy assignment operator called
	Fixed const b( 10 );		//	Int constructor called
	Fixed const c( 42.42f );	//	Float constructor called
	Fixed const d( b );			//	Copy constructor called

	a = Fixed( 1234.4321f );	//	Copy assignment operator called

	std::cout << "a is " << a << std::endl;	//	<< operator called
	std::cout << "b is " << b << std::endl;	//	<< operator called
	std::cout << "c is " << c << std::endl;	//	<< operator called
	std::cout << "d is " << d << std::endl;	//	<< operator called

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
