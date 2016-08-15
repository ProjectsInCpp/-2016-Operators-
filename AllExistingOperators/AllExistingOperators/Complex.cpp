#include "Complex.h"

std::ostream& operator<<(std::ostream& retVal, const Complex& inArg)
{
    retVal << "(" << inArg.real_ << "," << inArg.imagine_ << ")";
    return retVal;
}

void Complex::setReal(int inArg)
{
    real_ = inArg;
}

void Complex::setImagine(int inArg)
{
    imagine_ = inArg;
}
