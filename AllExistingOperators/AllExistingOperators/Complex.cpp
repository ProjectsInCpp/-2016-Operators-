#include "Complex.h"

std::ostream& operator<<(std::ostream& retVal, const Complex& inArg)
{
    retVal << "(" << inArg.real_ << "," << inArg.imagine_ << ")";
    return retVal;
}

