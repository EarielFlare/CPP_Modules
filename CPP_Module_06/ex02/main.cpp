#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	srand (time(NULL));
	int r = rand() % 3;

	if (r == 0) {
		std::cout << "Generated A" << std::endl;
		return new A();
	}
	else if (r == 1) {
		std::cout << "Generated B" << std::endl;
		return new B();
	}
	else {
		std::cout << "Generated C" << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	std::cout << "Pointer identifying: ";

	if (dynamic_cast<A *>(p) != 0)
		std::cout << "I am A" << std::endl;
	else if (dynamic_cast<B *>(p) != 0)
		std::cout << "I am B" << std::endl;
	else if (dynamic_cast<C *>(p) != 0)
		std::cout << "I am C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
	std::cout << "Reference identifying: ";

	try {
		dynamic_cast<A &>(p);
		std::cout << "I am A" << std::endl;
	} catch (std::bad_cast &exc) {
		try {
			dynamic_cast<B &>(p);
			std::cout << "I am B" << std::endl;
		} catch (std::bad_cast &exc) {
			try {
				dynamic_cast<C &>(p);
				std::cout << "I am C" << std::endl;
			}
			catch (std::bad_cast &exc) {
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}

int main() {
	//	BASE: ABC
	std::cout << "------------POINTER-----------" << std::endl;
	Base *ptr = generate();
	identify(ptr);

	std::cout << "-----------REFERENCE----------" << std::endl;
	Base &ref = *generate();
	identify(ref);

	delete(ptr);
	delete(&ref);
	std::cout << std::endl;

	//	BASE: FAKE
	std::cout << "---------FAKE POINTER---------" << std::endl;
	Base *ptr_fake = new Base();
	identify(ptr_fake);

	std::cout << "--------FAKE REFERENCE--------" << std::endl;
	Base &ref_fake = *new Base();
	identify(ref_fake);

	delete(ptr_fake);
	delete(&ref_fake);

	return 0;
}
