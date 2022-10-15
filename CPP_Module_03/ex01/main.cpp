#include "ScavTrap.hpp"

int main()
{
	ScavTrap one("Cat");
	ScavTrap two("Dog");
	ScavTrap three("Rat");
	std::cout << std::endl;
	ScavTrap four;
	four = three;
	std::cout << std::endl;

	one.attack("Dog");
	two.takeDamage(80);
	two.takeDamage(30);
	two.takeDamage(30);
	two.guardGate();
	two.attack("Cat");
	one.guardGate();
	std::cout << std::endl;
	ScavTrap five(one);
	std::cout << std::endl;
/*	
	ClapTrap a("Mammal");
	ClapTrap b;
	b = a;
*/
	return 0;
}
