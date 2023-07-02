#include <iostream>
#include "Chapter6.h"

int main() {
	int a = 25;
	int b = 3;

	std::cout << "a: " << a << " b: " << b << std::endl;

	swap_r(a, b);

	std::cout << "a: " << a << " b: " << b << std::endl;

	return 0;
}

int swap_r(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
	return 0;
}