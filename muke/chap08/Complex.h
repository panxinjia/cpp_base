#ifndef CHAP08__COMPLEX_H_
#define CHAP08__COMPLEX_H_

#include <iostream>

using namespace std;

class Complex {
 private:
    double real;
    double imag;

 public:
    Complex();
    Complex(double real, double imag);

    Complex(const Complex &cplx);

    virtual ~Complex();

 public:
    double GetReal() const { return this->real; }
    void SetReal(double real) { this->real = real; }
    double GetImag() const { return this->imag; }
    void SetImag(double imag) { this->imag = imag; }
 public:
    Complex& operator=(const Complex& cplx);
    Complex operator+(const Complex& cplx) const;

    // 前置++  返回一个值
    Complex& operator++();
    // 后置++  先返回一个值, 再让自身++
    Complex operator++(int);

    // 友元函数, 可以突破访问权限, 但是声明方式需要注意
    friend ostream& operator<<(ostream& stdOut, const Complex& cplx);
    friend istream& operator>>(istream& stdIn, Complex& cplx);
};

#endif
