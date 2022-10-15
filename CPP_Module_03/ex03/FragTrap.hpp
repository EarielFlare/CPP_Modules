#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FT_HITPOINTS 100;
# define FT_ENRGPOINTS 100;
# define FT_ATTACKDMG 30;

class FragTrap : public virtual ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &object);

	~FragTrap();

	FragTrap &operator=(const FragTrap &object);

	void highFivesGuys(void);
	unsigned int GetHitPoints(void);
	unsigned int GetEnrgPoints(void);
	unsigned int GetAttackDmg(void);
};

#endif
