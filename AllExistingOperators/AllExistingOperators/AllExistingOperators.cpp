// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "UserInterface.h"
#include "Calculations.h"
#include <vector>

enum class OPERATION;

OPERATION receiveOperation();
void receiveValues(std::vector<Complex>& values);
Complex& calculate(std::vector<Complex>& values, OPERATION chosenOperation);
void printValues(std::vector<Complex>& values);


int main()
{
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };

    OPERATION chosenOperation = receiveOperation();
    receiveValues(values);
    Complex retVal = calculate(values, chosenOperation);

    std::cout << retVal << std::endl;
    return 0;
}
