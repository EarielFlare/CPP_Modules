#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) :
	name(name), hitpoints(10), enrgpoints(10), attackdmg(0) {
	std::cout << this->name << ": Constructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & object) :
	name(object.name), hitpoints(object.hitpoints),
	enrgpoints(object.hitpoints), attackdmg(object.attackdmg) {
	std::cout << this->name << ": Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << ": Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object) {
	if (this == &object)
		return *this;
	name = object.name;
	hitpoints = object.hitpoints;
	enrgpoints = object.enrgpoints;
	attackdmg = object.attackdmg;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (hitpoints == 0) {
		std::cout << "ClapTrap " << name << ": can't attack, because it's dead" << std::endl;
		return;
	} else if (enrgpoints == 0) {
		std::cout << "ClapTrap " << name << ": can't attack, hasn't enough energy" << std::endl;
		return;
	}
	enrgpoints--;
	std::cout 	<< "ClapTrap " << name << " attacks " << target 
				<< ", causing " << attackdmg << " point of damage"
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitpoints == 0) {
		std::cout << "ClapTrap " << name << ": can't take damage, because it's dead" << std::endl;
		return;
	}
	hitpoints = (amount > hitpoints) ? 0 : hitpoints - amount;
	std::cout 	<< "ClapTrap " << name << " takes " << amount 
				<< " damage. Now it has " << hitpoints << " hitpoints."
				<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitpoints == 0) {
		std::cout << "ClapTrap " << name << ": can't be repaired, because it's dead" << std::endl;
		return;
	} else if (enrgpoints == 0) {
		std::cout << "ClapTrap " << name << ": can't be repaired, hasn't enough energy" << std::endl;
		return;
	}
	hitpoints += amount;
	std::cout 	<< "ClapTrap " << name << " repairs " << amount 
				<< " hit points. Now it has " << hitpoints << " hitpoints."
				<< std::endl;
}
