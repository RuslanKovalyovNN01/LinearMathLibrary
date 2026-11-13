#pragma once
#include <iostream>

template<typename T>
class Complex{
    T real;
    T imag;
public:
    Complex(T _real, T _imag): real(_real), imag(_imag) {}
    Complex(Complex<T> &other): real(other.real), imag(other.imag) {}
    void print() {
        std::cout << real << " i*"<<imag << std::endl;
    }
};