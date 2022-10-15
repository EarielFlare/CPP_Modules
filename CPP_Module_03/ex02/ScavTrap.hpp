#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define ST_HITPOINTS 100;
# define ST_ENRGPOINTS 50;
# define ST_ATTACKDMG 20;

class ScavTrap : public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &object);

	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &object);

	void guardGate();
	void attack(const std::string &target);
};

#endif
