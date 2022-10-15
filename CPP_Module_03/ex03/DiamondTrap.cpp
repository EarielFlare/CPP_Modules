#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ScavTrap(name), FragTrap(name), name(name) {
	ClapTrap::name = name + "_clap_name";
	hitpoints = FragTrap::GetHitPoints();
	enrgpoints = ScavTrap::GetEnrgPoints();
	attackdmg = ScavTrap::GetAttackDmg();
//	std::cout << hitpoints << std::endl;
//	std::cout << enrgpoints << std::endl;
//	std::cout << attackdmg << std::endl;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) : name(object.name) {
	ClapTrap::name = object.name + "_clap_name";
	hitpoints = object.hitpoints;
	enrgpoints = object.enrgpoints;
	attackdmg = object.attackdmg;
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &object) {
	if (this != &object) {
		ClapTrap::name = object.ClapTrap::name;
		name = object.name;
		hitpoints = object.hitpoints;
		enrgpoints = object.enrgpoints;
		attackdmg = object.attackdmg;
	}
	std::cout << "DiamondTrap " << name << " assigment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	//	Just a little decoration
//	std::cout 	<< "My name is " << (name.empty() ? "" : name) << " by DiamondTrap"
//				<< " and " << (ClapTrap::name.empty() ? "" : ClapTrap::name)
//				<< " by ClapTrap"	<< std::endl;
	std::cout 	<< "My name is " << name << " by DiamondTrap" << " and "
				<< ClapTrap::name << " by ClapTrap"	<< std::endl;
}
