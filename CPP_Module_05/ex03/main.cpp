#include "Intern.hpp"
//#include "Bureaucrat.hpp"
//#include "Form.hpp"
//#include "ShrubberyCreationForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	barin("Barin", 40);	//	80, 60, 40

	Intern	intern;
	Form	*f1 = intern.makeForm("smth", "sweet");	//	This form can't be done
	Form	*f2 = intern.makeForm("RRF", "Bender");	//	Intern makes new robotomy form
	std::cout << *f2 << std::endl;			//	check if the form is really exist

	barin.signForm(*f2);
	try {
		f2->execute(barin);
	}
	catch (const char *str) {
		std::cerr	<< barin.getName() << " couldn’t execute " << f2->getName()
					<< " because " << str << std::endl;
	}
	catch (const std::exception &exc) {
		std::cerr << exc.what() << std::endl;
	}
	return 0;
}
