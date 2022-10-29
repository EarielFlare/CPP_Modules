#include <vector>
#include "Span.hpp"

int main() {
	std::cout << "------------Subject-----------" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--------Test addNumber--------" << std::endl;
	try {
		Span ar1(4);
		std::vector<int> lst;
		for (int i = 1; i <= 4; i++)
			lst.push_back(i + 10);
		for (std::vector<int>::iterator it = lst.begin();
			it != lst.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
		ar1.addNumber(lst.begin(), lst.end());
		ar1.showArr();
//		for (std::vector<int>::iterator it = ar.getArr().begin();
//			it != ar.getArr().end(); ++it) {
//			std::cout << "r";
//			std::cout << "mM" << it.base() << " ";
//		}
		std::cout << "Shortest Span: " << ar1.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << ar1.longestSpan() << std::endl;
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	std::cout << "------------My test-----------" << std::endl;
	try {
		Span ar2(4);
		ar2.addNumber(10);
		ar2.addNumber(1000);
		ar2.addNumber(15);
		ar2.addNumber(85);

		ar2.showArr();
		std::cout << "Longest Span: " << ar2.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << ar2.shortestSpan() << std::endl;
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	std::cout << "---My test (10 000 element)---" << std::endl;
	try {
		std::srand(time(0));
		Span span(10000);

		for (int i = 0; i < 10000; i++)
			span.addNumber(rand());
//		span.showArr();
		std::cout << "Longest Span: "  << span.longestSpan()  << std::endl;
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	std::cout << "---------Test (full)----------" << std::endl;
	try {
		Span test(2);
		test.addNumber(1);
		test.addNumber(-2);
		test.addNumber(10);
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	std::cout << "------Test(one_element)-------" << std::endl;
	try {
		Span one(1);
		one.addNumber(1);
		std::cout << one.longestSpan() << std::endl;
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	std::cout << "---------Test (zero)----------" << std::endl;
	try {
		Span tes(0);
		tes.addNumber(1);
	}
	catch (std::exception &exc) {
		std::cout << exc.what() << std::endl;
	}

	return 0;
}
