// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "UserInterface.h"
#include <vector>

enum class OPERATION;

void receivingValues(std::vector<Complex>& values);
OPERATION receivingOperation();
void printingValues(std::vector<Complex>& values);

int main()
{
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };
    OPERATION chosenOperation = receivingOperation();

    receivingValues(values);
    printingValues(values);

    return 0;
}
