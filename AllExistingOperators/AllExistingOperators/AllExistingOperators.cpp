// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include "UserInterface.h"
#include <vector>

void receivingValues(std::vector<Complex>& values);
//void receivingOperation(std::vector<Complex>& values);
//void calculation(std::vector<Complex>& values);
void printingValues(std::vector<Complex>& values);

int main()
{
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };

    receivingValues(values);
    printingValues(values);

    return 0;
}
