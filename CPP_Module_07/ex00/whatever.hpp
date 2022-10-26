#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b) {
	return (a < b) ? a : b;
}

template <typename T>
const T &max(const T &a, const T &b) {
	return (a > b) ? a : b;
}
/*
class Awesome
{
	private:
		int num;
	public:
		Awesome(void) : num(0) {}
		Awesome(int num) : num(num) {}
		Awesome	&operator=(Awesome &obj) {
			num = obj.num;
			return *this;
		}
		bool	operator==(Awesome const &rhs) const {return (this->num == rhs.num);}
		bool	operator!=(Awesome const &rhs) const {return (this->num != rhs.num);}
		bool	operator> (Awesome const &rhs) const {return (this->num >  rhs.num);}
		bool	operator< (Awesome const &rhs) const {return (this->num <  rhs.num);}
		bool	operator>=(Awesome const &rhs) const {return (this->num >= rhs.num);}
		bool	operator<=(Awesome const &rhs) const {return (this->num <= rhs.num);}
		int		getnum() const {return num;}
};

std::ostream	&operator<<(std::ostream &ost, const Awesome &obj) {
	ost << obj.getnum();
	return ost;
}
*/
#endif
