#include "Complex.h"

void Complex::setReal(int inArg)
{
    real_ = inArg;
}

void Complex::setImagine(int inArg)
{
    imagine_ = inArg;
}

std::ostream& operator<<(std::ostream& retVal, const Complex& inArg)
{
    retVal << "(" << inArg.real_ << "," << inArg.imagine_ << ")";
    return retVal;
}

std::istream& operator >> (std::istream& retVal, Complex& inArg)
{
    std::cout << "Pass Real:"; std::cin >> inArg.real_;
    std::cout << "Pass Imagine:"; std::cin >> inArg.imagine_;

    return retVal;
}
