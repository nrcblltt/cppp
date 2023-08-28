#include <iostream>
#include <string>

struct Person1 {
	std::string name;
	std::string address;
	
	std::string getName() const { return name; };
	std::string getAddress() const { return address; };
};

// here getName() and getAddress() can modify the object;
struct Person2 {
	std::string name;
	std::string address;
	
	std::string getName() { 
		name = "alfredo";
		return name; 
	};
	std::string getAddress() { 
		address = "via gioia, 23";
		return address; 
	};
};

int main() {
	Person1 p1;
	p1.name = "pino";
	p1.address = "via dei tigli, 22";
	std::cout << p1.getName() << std::endl;
	std::cout << p1.getAddress() << std::endl;

	Person2 p2;
	p2.name = "nando";
	std::cout << p2.getName() << std::endl;
	std::cout << p2.getAddress() << std::endl;
	return 0;
}
