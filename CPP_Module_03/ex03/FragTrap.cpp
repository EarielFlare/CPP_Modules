#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	hitpoints = FT_HITPOINTS;
	enrgpoints = FT_ENRGPOINTS;
	attackdmg = FT_ATTACKDMG;
	std::cout << "FragTrap: " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object.name) {
	hitpoints = object.hitpoints;
	enrgpoints = object.enrgpoints;
	attackdmg = object.attackdmg;
	std::cout << "FragTrap: " << name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &object) {
	if (this != &object) {
		hitpoints = object.hitpoints;
		enrgpoints = object.enrgpoints;
		attackdmg = object.attackdmg;
	}
	std::cout << "FragTrap: " << name << " assigment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: " << name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	//	Just a little decoration
//	std::cout << "FragTrap: " << ((name.length() == 0) ? "" : name + " ")
//		<< "High Fives Guys!" << std::endl;
	std::cout << "FragTrap: " << name << " High Fives Guys!" << std::endl;
}

unsigned int FragTrap::GetHitPoints(void) { return FT_HITPOINTS; }
unsigned int FragTrap::GetEnrgPoints(void) { return FT_ENRGPOINTS; }
unsigned int FragTrap::GetAttackDmg(void) { return FT_ATTACKDMG; }
