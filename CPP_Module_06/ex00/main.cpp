#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "./Convert ARG\n";
		return (0);
	}

	Convert	str(argv[1]);

	str.printChar();
	str.printInt();
	str.printFloat();
	str.printDouble();
/*
*/
	return (0);
}
