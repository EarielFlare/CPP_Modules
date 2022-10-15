#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	hitpoints = HITPOINTS;
	enrgpoints = ENRGPOINTS;
	attackdmg = ATTACKDMG;
	std::cout << "ScavTrap: " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object.name) {
	hitpoints = object.hitpoints;
	enrgpoints = object.enrgpoints;
	attackdmg = object.attackdmg;
	std::cout << "ScavTrap: " << name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object) {
	if (this != &object) {
		name = object.name;
		hitpoints = object.hitpoints;
		enrgpoints = object.enrgpoints;
		attackdmg = object.attackdmg;
	}
	std::cout << "ScavTrap: " << name << " assigment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: " << name << " destructor called" << std::endl;
}

void	ScavTrap::guardGate() {
	//	Just a little decoration
//	std::cout << "ScavTrap: " << ((name.length() == 0) ? "" : name + " " )
//		<< "is now in Gate keeper mode" << std::endl;
	std::cout << "ScavTrap: " << name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (hitpoints == 0) {
		std::cout << "ScavTrap: " << name << " can't attack, because it's dead" << std::endl;
		return;
	} else if (enrgpoints == 0) {
		std::cout << "ScavTrap: " << name << " can't attack, hasn't enough energy" << std::endl;
		return;
	}
	enrgpoints--;
	std::cout 	<< "ScavTrap: " << name << " attacks " << target 
				<< ", causing " << attackdmg << " point of damage!"
				<< std::endl;
}
