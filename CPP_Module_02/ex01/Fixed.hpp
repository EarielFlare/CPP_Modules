#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bit = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	
	//	Copy assignment operator
//	Fixed	operator=(const Fixed assign);		//	DO NOT CODE THIS
	Fixed	&operator=(const Fixed &assign);	//	USE REFERENCES

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

//	<< operator
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif
