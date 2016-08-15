#pragma once
#include <vector>
#include "Utils.h"
#include "Complex.h"

Complex& calculate(std::vector<Complex>& values, OPERATION chosenOperation)
{
    Complex retVal;

    switch (chosenOperation)
    {
        case OPERATION::ADD:
        {
            for (auto it : values)
            {
                retVal = retVal + it;
            }
            break;
        }

        case OPERATION::SUBTRACT:
        {
            for (auto it : values)
            {
                retVal = retVal - it;
            }
            break;
        }

        case OPERATION::MULTI:
        {
            Complex tempVal{ 1,1 };

            for (auto it : values)
            {
                tempVal = tempVal * it;
            }

            retVal = tempVal;
            break;
        }

        case OPERATION::UNDEFINED:
        {
            std::cout << "You put wrong operator";
            break;
        }
    }

    return retVal;
}
