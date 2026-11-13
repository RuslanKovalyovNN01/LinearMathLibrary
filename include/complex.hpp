#pragma once
#include <iostream>

template<typename T>
class Complex {
    T real;
    T image;
public:
    Complex(T _real, T _image) : real(_real), image(_image) {}
    void print() {
        std::cout << real << " + i *  " << image << std::endl;
    }
};