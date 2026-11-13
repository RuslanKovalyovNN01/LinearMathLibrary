#include <iostream>
#include "include/complex.hpp"

int main() {
    Complex<int> complex(3,4);
    complex.print();
    std::cout << "init\n";
    return 0;
}