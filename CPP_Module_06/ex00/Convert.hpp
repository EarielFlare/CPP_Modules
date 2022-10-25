#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <climits>
# include <iomanip>
# include <iostream>

class Convert
{
	private:
		std::string str;
	public:
		Convert();
		Convert(std::string strr);
		Convert(const Convert &x);
		~Convert();
		
		Convert &operator=(const Convert &x);

		std::string getStr() const;
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
};

#endif
