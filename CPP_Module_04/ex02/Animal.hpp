#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
protected:
	std::string type;
public:
	//	If we want, we can also move all methods
	//	(except ~Animal) to protected section..
	Animal();
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual ~Animal();

	//	Making abstract method (= 0):
	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif
