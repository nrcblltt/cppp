// Type your code here, or load an example.
#include <iostream>

int carr[5];

int main() {
    int arr[10];
    for (auto i : carr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (auto i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    int (&rarr)[10] = arr;
    for (int i = 0; i < 10; ++i) {
        rarr[i] = 23;
    }
    for (auto i : arr) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
}