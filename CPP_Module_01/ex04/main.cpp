#include <iostream>
#include <string>
#include <fstream>

std::string replaceStrings(std::string str, std::string s1, std::string s2) {
	if (s1.length() == 0) {
		std::cout << "Error! s1 can't be empty!" << std::endl;
		exit (1);
	}
	std::string	res = "";
	while (str.find(s1) != std::string::npos) {
		res += str.substr(0, str.find(s1));
		res += s2;
		str = str.substr(str.find(s1) + s1.length(), str.length());
	}
	return res + str;
}

std::string	replaceFileName(std::string filename) {
	if (filename.find_last_of('.')) {
		return filename.substr(0, filename.find_last_of('.')) + ".replace";
	}
	return (filename + ".replace");
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "The program runs as follows:" << std::endl;
		std::cout << "./Replace filename string1 string2" << std::endl;
		exit (1);
	}
	std::string s1 = argv[2];
	if (s1.empty()) {
		std::cout << "Error! string s1 can't be empty!" << std::endl;
		exit(1);
	}
	std::ifstream fin;
	std::ofstream fout;
	fin.open(argv[1]);
	if (!fin.is_open()) {
		std::cout << "Error! Can't open input file!" << std::endl;
		fin.close();
		fout.close();
		exit(1);
	}
	fout.open(replaceFileName(argv[1]));
	if (!fout.is_open()) {
		std::cout << "Error! Can't open output file!" << std::endl;
		fin.close();
		fout.close();
		exit(1);
	}
	std::string str;
	while (!fin.eof()) {
		str = "";
		getline(fin, str);
		fout << replaceStrings(str, argv[2], argv[3]) << std::endl;
	}
	return 0;
}
