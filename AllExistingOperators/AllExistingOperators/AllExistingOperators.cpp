// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "UserInterface.h"
#include <vector>

void receivingValues(std::vector<Complex>& values, int size);
void printingValues(std::vector<Complex>& values, int size);

int main()
{
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };

    receivingValues(values, ammountOfNumbers);
    printingValues(values, ammountOfNumbers);

    return 0;
}
