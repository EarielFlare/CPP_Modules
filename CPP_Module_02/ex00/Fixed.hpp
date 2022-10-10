#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	~Fixed();
	//	copy constructor
	Fixed(const Fixed &copy);
	//	copy assignment operator overload
	Fixed &operator= (const Fixed &assign);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
