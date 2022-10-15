#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap one("Cat");
	FragTrap two("Dog");
	FragTrap three("Rat");
	std::cout << std::endl;
	FragTrap four;
	four = three;
	std::cout << std::endl;

	one.attack("Dog");
//	two.takeDamage(80);
//	two.takeDamage(30);
	two.takeDamage(30);
	two.highFivesGuys();
	two.attack("Cat");
	one.highFivesGuys();
	std::cout << std::endl;
	FragTrap five(one);
	std::cout << std::endl;
	return 0;
}
