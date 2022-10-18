#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
private:

public:
	Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	~Cat();

	virtual void makeSound() const;
};

#endif