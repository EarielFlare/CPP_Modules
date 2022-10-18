#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
/*
	//	Making stack array of 100 Animal pointers
	Animal *arrAnimal[100];
	//	Making 50 Cats
	for (int i = 0; i < 50; i++)
		arrAnimal[i] = new Cat();
	//	Making 50 Dogs
	for (int i = 50; i < 100; i++)
		arrAnimal[i] = new Dog();
	std::cout << std::endl;

	//	Haha, kill'm all! (it's just a class objects)
	for (int i = 0; i < 100; i++)
		delete arrAnimal[i];
*/

	std::cout <<"---------Create one Dog---------"  << std::endl;
	const Animal* dog = new Dog();
	std::cout  << "---------Create one Cat---------"  << std::endl;
	const Animal* cat = new Cat();
	std::cout  << "---------Create copy Cat---------"   << std::endl;
//	Copy constructor:	Cat::Cat(const Cat &cat);
//	 (Cat*)cat	is a cast from Animal* to Cat*, so
//	*(Cat*)cat	is a Cat class object, which is passed to copy constructor
	const Animal* cat_copy = new Cat(*(Cat*)cat);		//	Making Cat copy

	std::cout << std::endl  << "---------Delete copy Cat!--------"  << std::endl;
	delete cat_copy;
	std::cout  << "---------Delete Dog!------------"  << std::endl;
	delete dog; //should not create a leak
	std::cout  << "---------Delete Cat!------------"  << std::endl;
	delete cat;

/*
	Cat kitty;
	std::cout << std::endl;
	Cat mu(kitty);	//	copying
	std::cout << std::endl;
	Cat musly;
	std::cout << std::endl;
	musly = kitty;	//	operator=
	std::cout << std::endl;
*/
	return (0);
}
