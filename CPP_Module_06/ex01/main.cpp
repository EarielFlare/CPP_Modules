#include <iostream>

struct Data {
	std::string name;
};

uintptr_t serialize(Data *ptr) {
	//	casting (Data *) to (uintptr_t)
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	//	casting (uintptr_t) to (Data *)
	return(reinterpret_cast<Data *>(raw));
}

int main() {
	Data data = {"apple"};
	//	uintptr_t is capable of storing a data pointer
	uintptr_t test;
	Data *p_data;

	std::cout << "\n---------------VALUE---------------" << std::endl;
	std::cout << "Value: " << data.name << " | Adress: " << &data << std::endl;

	std::cout << "-------------SERIALIZE---------------" << std::endl;
	test = serialize(&data);
	std::cout << "Adress(uintptr_t test): " << test << std::endl;

	std::cout << "------------DESERIALIZE--------------" << std::endl;
	p_data = deserialize(test);
	std::cout << "Value: " << p_data->name << " | Adress: " << p_data << "\n" << std::endl;
}
