#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
//	This will not work, because Animal is abstract class:
//	Animal animal;
//	const Animal* animal = new Animal();

	std::cout << "---------Create one Dog---------" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "---------Create one Cat---------" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "---------Create copy Cat--------" << std::endl;
//	Copy constructor:	Cat::Cat(const Cat &cat);
//	 (Cat*)cat	is a cast from Animal* to Cat*, so
//	*(Cat*)cat	is a Cat class object, which is passed to copy constructor
	const Animal* cat_copy = new Cat(*(Cat*)cat);		//	Making Cat copy

	std::cout << std::endl;
	std::cout << "--------Delete copy Cat!--------" << std::endl;
	delete cat_copy;
	std::cout << "----------Delete Dog!-----------" << std::endl;
	delete dog; //should not create a leak
	std::cout << "----------Delete Cat!-----------" << std::endl;
	delete cat;

	return (0);
}
