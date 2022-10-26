#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(const T &obj)) {
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename T>
void printarr(const T &obj) {
	std::cout << obj << std::endl;
}
/*
class Awesome
{
	private:
		int num;
	public:
		Awesome(void) {
			std::srand(time(0));
			num = std::rand() % 10;
		}
//		Awesome(int num) : num(num) {}
		int get(void) const {return this->num;}
};

std::ostream &operator<<(std::ostream &ost, const Awesome &rhs) {
	ost << rhs.get();
	return ost;
}
*/
#endif
