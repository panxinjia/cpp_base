#include <iostream>
#include "Complex.h"


using namespace std;

Complex::Complex(double real, double imag): _real(real), _imag(imag) {
    cout << "Complex::Complex(double real, double imag): _real(real), _imag(imag)" << endl;
}

Complex::Complex(const Complex& c) {
    this->_real = c._real;
    this->_imag = c._imag;
    cout << "Complex::Complex(const Complex& c)" << endl;
}

Complex::~Complex() {
    cout << "Complex::~Complex()" << endl;
}