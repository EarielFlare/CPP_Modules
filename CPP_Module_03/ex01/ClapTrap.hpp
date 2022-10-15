#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
	std::string		name;
	unsigned int	hitpoints;
	unsigned int	enrgpoints;
	unsigned int	attackdmg;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &object);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &object);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif