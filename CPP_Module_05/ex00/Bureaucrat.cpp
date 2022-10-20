#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

//Bureaucrat::Bureaucrat(std::string name, int grade)
//Bureaucrat::Bureaucrat(const std::string &name, int grade)
Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
	: name(name), grade(grade) {
	if (grade > 150)
		throw GradeTooLowException();	//	making exception
	if (grade < 1)
		throw GradeTooHighException();	//	making exception
}
/*
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	(*this) = bureaucrat;
}
*/
Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
	: name(bureaucrat.name), grade(bureaucrat.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
//		name = bureaucrat.name;	//	don't work because of const name
		const_cast<std::string &>(name) = bureaucrat.name;
		grade = bureaucrat.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::upGrade() {
	if (grade == 1)
		throw GradeTooHighException();	//	making exception
	grade--;
}

void Bureaucrat::downGrade() {
	if (grade == 150)
		throw GradeTooLowException();	//	making exception
	grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Error! Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Error! Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName()
		<< ", grade " << bureaucrat.getGrade();
	return out;
}
