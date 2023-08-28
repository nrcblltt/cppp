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

std::ostream &print(std::ostream&, const Person1&);
std::istream &read(std::istream&, const Person1&);

std::ostream &print(std::ostream &os, const Person1 &p) {
	os << p.getName() << " -  " << p.getAddress();
	return os;
}

std::istream &read(std::istream &is, Person1 &p) {
	is >> p.name;
	is.ignore();
	std::getline(is, p.address);
	return is;
}

int main() {
	Person1 p1;
	read(std::cin, p1);
	print(std::cout, p1);	
	return 0;
}
