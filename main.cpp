#include <iostream>
#include "include/LinearMathLibrary/LinearMathLibrary.hpp"

int main() {
    Complex<int> complex(3,4);
    complex.print();
    std::cout << "init\n";
    return 0;
}