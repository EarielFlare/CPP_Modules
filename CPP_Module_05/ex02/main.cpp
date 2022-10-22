#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form form("Cert", 10, 4);
	Bureaucrat john("John", 11);

	std::cout << form << std::endl << std::endl;
	std::cout << john << std::endl;
	
	john.signForm(form);
	john.upGrade();
	john.signForm(form);

	std::cout << std::endl << form << std::endl;

	return 0;
}
