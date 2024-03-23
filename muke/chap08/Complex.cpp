#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
    this->real = 0.0;
    this->imag = 0.0;
    cout << "Complex()" << endl;
}

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
    cout << "Complex::Complex(double real, double imag)" << endl;
}

Complex::Complex(const Complex &cplx) {
    this->real = cplx.real;
    this->imag = cplx.imag;
    cout << "Complex::Complex(const Complex &cplx)" << endl;
}
Complex::~Complex() {
    cout << "~Complex()" << endl;
}
Complex &Complex::operator=(const Complex &cplx) {
    // 优化赋值动作
    if (this != &cplx) {
        this->real = cplx.real;
        this->imag = cplx.imag;
    }
    cout << "Complex &Complex::operator=(const Complex &cplx)" << endl;
    return *this;
}

// + 运算符重载, 返回一个新值
Complex Complex::operator+(const Complex &cplx) const {
//    Complex temp;
//    temp.real = this->real + cplx.real;
//    temp.imag = this->imag + cplx.imag;
//    return temp;
    return Complex(this->real + cplx.real, this->imag + cplx.imag);
}
Complex &Complex::operator++() {
    this->real++;
    this->imag++;
    return *this;
}

Complex Complex::operator++(int){
    // 后置++
    return Complex(this->real++, this->imag++);
}
ostream &operator<<(ostream &stdOut, const Complex &cplx) {
    stdOut << "(" << cplx.real << ", " << cplx.imag << ")";
    return stdOut;
}

istream &operator>>(istream &stdIn, Complex &cplx) {
    stdIn >> cplx.real >> cplx.imag;
    return stdIn;
}


