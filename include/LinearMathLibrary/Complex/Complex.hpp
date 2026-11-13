#pragma once
#include <iostream>

template<typename T>
class Complex{
    T real;
    T imag;
public:
    Complex(T _real, T _imag): real(_real), imag(_imag) {}
    Complex(Complex<T> &other): real(other.real), imag(other.imag) {}
    Complex& operator+=(const Complex &other){
        real += other.real;
        imag += other.imag;
        return *this;
    }
    Complex& operator-=(const Complex &other){
        real -= other.real;
        imag -= other.imag;
        return *this;
    }
    bool operator==(const Complex &other) const{
        return (real == other.real && imag == other.imag);
    }
    bool operator!=(const Complex &other) const {
        return (real != other.real || imag != other.imag);
    }
    void print() {
        std::cout << real << " i*"<<imag << std::endl;
    }
};

template<typename T>
inline Complex<T> operator+(Complex<T> lhs, const Complex<T> &rhs){
    lhs += rhs;
    return lhs;
}

template<typename T>
inline Complex<T> operator-(Complex<T> lhs, const Complex<T> &rhs){
    lhs -= rhs;
    return lhs;
}

