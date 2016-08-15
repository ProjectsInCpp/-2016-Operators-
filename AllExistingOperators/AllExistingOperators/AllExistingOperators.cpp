// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "UserInterface.h"
#include <vector>

enum class OPERATION;

OPERATION receiveOperation();
void receiveValues(std::vector<Complex>& values);
void printValues(std::vector<Complex>& values);


int main()
{
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };

    OPERATION chosenOperation = receiveOperation();
    receiveValues(values);
    printValues(values);

    return 0;
}
