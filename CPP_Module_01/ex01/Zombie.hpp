#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;

			int	m_value;
public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
