#include "iter.hpp"

int main()
{
	int	size;
	
	std::cout << "------INT-------" << std::endl;
	int arr1[] = {10, 21, 34, 45, 57, 16, 78};
	size = sizeof(arr1) / sizeof(arr1[0]);
	iter(arr1, size, printarr);

	std::cout << "-----STRING-----" << std::endl;
	std::string arr2[] = {"cat", "dog", "lion"};
	size = sizeof(arr2) / sizeof(arr2[0]);
	iter(arr2, size, printarr);

	std::cout << "------FLOAT-----" << std::endl;
	float arr3[] = {4.25, 7.32, 9.12, 7.56, 11.57};
	size = sizeof(arr3) / sizeof(arr3[0]);
	iter(arr3, size, printarr);
/*
	std::cout << "------CLASS-----" << std::endl;
	size = 5;
	Awesome obj[size];
	iter(obj, size, printarr);
*/
	return (0);
}
