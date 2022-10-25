#include "Convert.hpp"

Convert::Convert() : str("0") {}

Convert::Convert(std::string str) : str(str) {}

Convert::Convert(const Convert &x) : str(x.str){
//	*this = x;	//	not necessary
}

Convert &Convert::operator=(const Convert &x) {
	if (this != &x)
		str = x.getStr();
	return (*this);
}

Convert::~Convert() {}

std::string Convert::getStr() const {
	return (str);
}

void Convert::printChar() {
	std::cout << "char: ";
	try {
		int number = std::stoi(str);
		if (number < CHAR_MIN || number > CHAR_MAX)
			std::cout << "impossible" << std::endl;
		else if (number < 33 || number > 126)
			std::cout << "Non displayable" << std::endl;
		else {
			char a = static_cast<char>(number);
			std::cout << "'" << a << "'" << std::endl;
		}
	}
	catch (std::invalid_argument &x) {
		if (str.length() == 1)
			std::cout << "'" << str << "'" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	catch (const std::out_of_range &x) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::printInt() {
	std::cout << "int: ";
	try {
		int number = std::stoi(str);
		std::cout << number << std::endl;
	}
	catch (std::invalid_argument &x) {
		std::cout << "impossible" << std::endl;
	}
	catch (const std::out_of_range &x) {
		std::cout << "impossible" << std::endl;
	}
}

void Convert::printFloat() {
	std::cout << "float: ";
	try {
		float number = std::stof(str);
		std::cout << std::fixed << std::setprecision(1) << number << "f" << std::endl;
	}
	catch (std::invalid_argument &x) {
		std::cout << "impossible" << std::endl;
	}
	catch (const std::out_of_range &x) {
		std::cout << "impossible" << std::endl;
	}
}

void  Convert::printDouble() {
	std::cout << "double: ";
	try {
		double number = std::stod(str);
		std::cout << std::fixed << std::setprecision(1) << number << std::endl;
	}
	catch (std::invalid_argument &x) {
		std::cout << "impossible" << std::endl;
	}
	catch (const std::out_of_range &x) {
		std::cout << "impossible" << std::endl;
	}
}
