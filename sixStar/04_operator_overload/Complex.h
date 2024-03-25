#ifndef _COMPLEX_H_
#define _COMPLEX_H_

using namespace std;

class Complex
{
private:
    double _real;
    double _imag;

public:
    // 小技巧: 可以减少定义一个默认构造函数
    Complex(double real = 0.0, double imag = 0.0);
    Complex(const Complex& c);
    // 虚析构
    virtual ~Complex();

    double GetReal() const { return this->_real; }
    void SetReal(double real) { this->_real = real; } 
    double GetImag() const { return this->_imag; }
    void SetImag(double imag) { this->_imag = imag; }
public:
    void display() const {
        cout << "(" << this->_real << "+" << this->_imag << "i)" << endl;
    }
 public:
    // 类内重载
    Complex operator+(const Complex& c) const {
        return {this->_real + c._real, this->_imag + c._imag};
    }

    // 类外重载
    friend inline Complex operator+(const Complex& c, int n);
};

inline Complex operator+(const Complex& c, int n) {
    return {c._real + n, c._imag};
}

#endif // _COMPLEX_H_