#include <iostream>
#include <exception>
#include "Array.hpp"

#define MAX_VAL 8

int main(void){
//	Array<int> *ptr;
//	Array<int> rtrt(3);
//	ptr = &rtrt;
//	ptr = new Array<int>();
//	ptr = new Array<int>(3);
//	Array<int> *ptr = new Array<int>(3);
//	delete ptr;

	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++){
		const int value = rand() % 100;
		numbers[i] = value;
		mirror[i] = value;
	}

	std::cout << "-|numbers VS tmpobj VS copyobj|-\n";
	Array<int> tmpobj = numbers;
	Array<int> copyobj(tmpobj);
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << numbers[i] << "|";
	std::cout << std::endl;
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << copyobj[i] << "|";
	std::cout << std::endl;
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << tmpobj[i] << "|";
	std::cout << std::endl << std::endl;

	std::cout << "---|Compare numbers VS mirror|---\n";
	for (int i = 0; i < MAX_VAL; i++){
		if (mirror[i] != numbers[i]){
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	std::cout << "-|test the [] operator with -2|--\n";
	try{
		numbers[-2] = 0;
	}
	catch(const std::exception& exc){
		std::cerr << exc.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "|test the [] oper with MAX_VALUE|\n";
	try{
		numbers[10] = 0;
	}
	catch(const std::exception& exc){
		std::cerr << exc.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "|Change the values of numbers|\n";
	for (int i = 0; i < MAX_VAL; i++){
		numbers[i] = rand()%10;
	}
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << numbers[i] << "|";
	std::cout << std::endl;
	
	delete[] mirror;

	return 0;
}
