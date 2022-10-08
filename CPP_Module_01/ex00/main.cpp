#include "Zombie.hpp"

int main() {
	Zombie *manualZombiePtr = new Zombie("Handmade_Zombie");
	manualZombiePtr->announce();
	delete manualZombiePtr;

	Zombie *ptr = newZombie("Function_made_Zombie");
	ptr->announce();
	delete ptr;

	randomChump("Stack_Zombie");

	return 0;
}
