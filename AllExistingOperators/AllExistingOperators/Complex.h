#pragma once

#include <iostream>
#include <string>

class Complex
{
private:
    int real_, imagine_;

public:
    Complex() : real_(0), imagine_(0) {};
    Complex(int real, int imagine) : real_(real), imagine_(imagine) {};
    friend std::ostream& operator<<(std::ostream& retVal, const Complex& inArg);
    friend std::istream& operator>>(std::istream& retVal, Complex& inArg);

    Complex& operator+(Complex& inVal);
    Complex& operator-(Complex& inVal);
    Complex& operator*(Complex& inVal);

    void setReal(int inArg);
    void setImagine(int inArg);
};
