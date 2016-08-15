#pragma once

#include <iostream>
#include <string>

class Complex
{
private:
    int real_, imagine_;

public:
    Complex(int real, int imagine) : real_(real), imagine_(imagine) {};
    friend std::ostream& operator<<(std::ostream& retVal, const Complex& inArg);
};
