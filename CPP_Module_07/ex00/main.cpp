#include "whatever.hpp"

int main(void){
	std::cout << "-----------INT----------" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "-----------STRING----------" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "-----------CHAR----------" << std::endl;
	char e = 'a';
	char f = 'z';
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << std::endl;
/*
	std::cout << "-----------AWESOME----------" << std::endl;
	Awesome obj1(2);
	Awesome obj2(4);
	::swap(obj1, obj2);
	std::cout << "obj1 = " << obj1 << ", obj2 = " << obj2 << std::endl;
	std::cout << "min( obj1, obj2 ): " << min(obj1, obj2) << std::endl;
	std::cout << "max( obj1, obj2 ): " << max(obj1, obj2) << std::endl;
*/
	return 0;
}
