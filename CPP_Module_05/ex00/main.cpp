#include "Bureaucrat.hpp"

int main()
{

		Bureaucrat a("John", 1);
		Bureaucrat b("Mike", 5);
//		b = a;
//		std::cout << b.getName() << std::endl;
		Bureaucrat c(b);
		std::cout << c.getName() << std::endl;
		std::cout << c.getGrade() << std::endl;

	try	{
		Bureaucrat a("John", 1);
		std::cout << a << std::endl;
		a.downGrade();
			std::cout << a << std::endl;
		a.upGrade();
			std::cout << a << std::endl;
		a.upGrade();
			std::cout << a << std::endl;
		std::cout << "There is nothing to see here!" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
//	std::cout << std::endl;
	try	{
		Bureaucrat a("Mike", -1);
			std::cout << a << std::endl;
		std::cout << "There is nothing to see here!" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
//	std::cout << std::endl;
	try	{
		Bureaucrat a("Page", 150);
			std::cout << a << std::endl;
		a.downGrade();
			std::cout << a << std::endl;
		std::cout << "There is nothing to see here!" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
