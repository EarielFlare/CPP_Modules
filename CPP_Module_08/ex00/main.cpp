#include <iostream>
#include "EasyFind.hpp"

#include <list>

int	main() {
	std::vector<int> vec;
	
	srand(time(NULL));
	for(int i = 0; i < 8; ++i)
	vec.push_back(rand() % 100);
	std::cout << "VECTOR CONTAINS: ";
	for (int i = 0; i < 8; ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	try{
		std::cout << "Trying to find 5th element: ";
		std::cout << *EasyFind(vec, vec[4]) << std::endl;
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << '\n';
	}
	try{
		std::cout << "Trying to find 10th element (don't exist): ";
		std::cout << *EasyFind(vec, vec[10]) << std::endl;
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << '\n';
	}

	std::cout << std::endl;
	std::list<char> alphabet;
	for (int i = 0; i < 12; i++) {
		alphabet.push_back(i + 'a');
	}

	std::cout << "LIST CONTAINS: ";
	std::list<char>::iterator it = alphabet.begin();
	//	We can use .back() method to take a reference to last element
//	for (; *it != alphabet.back(); ++it) {
	//	or we can work only with an iterator 'it':
	for (; it != alphabet.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	try {
		std::cout << "Trying to find 'f' element: ";
		std::cout << *EasyFind(alphabet, 'f') << std::endl;
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << '\n';
	}
	try {
		std::cout << "Trying to find 'p' element (don't exist): ";
		std::cout << *EasyFind(alphabet, 'p') << std::endl;
	}
	catch(const std::exception& exc) {
		std::cerr << exc.what() << '\n';
	}

	return (0);
}
