#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array{
	private:
		T *arr;		//	arr pointer of type T
		unsigned int n;
	public:
		Array() : arr(new T[0]), n(0) {
//			std::cout << "Default constructor" << std::endl;
		};

		Array(unsigned int n) : arr(new T[n]), n(n){
//			std::cout << "Constructor" << std::endl;
//			arr = new T[n];			//	not necessary
		};

		Array(const Array &object) : arr(new T[object.n]), n(object.n){
//			std::cout << "Constructor copy" << std::endl;
			for (int i = 0; i < n; i++)
				this->arr[i] = object.arr[i];
		}

		Array &operator=(const Array &object){
//			std::cout << "Copy assignment" << std::endl;
			if (this != &object) {
				if (this->arr)
					delete[] this->arr;
				this->arr = new T[object.n];
				this->n = object.n;
				for (int i = 0; i < object.n; i++){
					this->arr[i] = object.arr[i];
				}
			}
			return (*this);
		}

		~Array(){
//			std::cout << "Destructor" << std::endl;
			if (this->arr)
				delete[] this->arr;
		};

		int size() {return this->n;}

		class IndexOutOfBounds : public std::exception{
		public:
			const char *what() const throw(){
				return ("---Array Index out of bounds!---");
			}
		};

		T &operator[](int i){
			if (i < 0 || i >= n)
				throw IndexOutOfBounds();
			return this->arr[i];
		}
};

#endif
