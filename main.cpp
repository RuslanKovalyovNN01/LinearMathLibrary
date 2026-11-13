#include <iostream>
#include "include/LinearMathLibrary/LinearMathLibrary.hpp"

int main() {
    Complex<int> complex1(3,4);
    Complex<int> complex2(2,3);
    complex1 += complex2;
    complex1.print();
    std::cout << (complex1 == complex2) << std::endl;
    std::cout << "init\n";
    return 0;
}