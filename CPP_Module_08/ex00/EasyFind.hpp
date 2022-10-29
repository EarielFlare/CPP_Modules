#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class EasyFindException : public std::exception {
public:
	const char *what() const throw() {
		return "Element not found!";
	}
};

template <typename T>
//	Function accepts container of T type
//	and returns an iterator of T type (template)
typename T::iterator EasyFind(T cont, int find) {
	typename T::iterator it;

	if ((it = std::find(cont.begin(), cont.end(), find)) == cont.end())
		throw EasyFindException();
	return it;
}

#endif
