// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"
#include <vector>

const std::string newLineSeparator = "\n";

int main()
{
    int inputReal = 0;
    int inputImagine = 0;
    constexpr unsigned int ammountOfNumbers = 3;
    std::vector<Complex> values{ ammountOfNumbers };

    std::cout << "Hi\n Please put your numbers\n";
    for (int i = 0; i < ammountOfNumbers; i++)
    {
        std::cout << "\nIt is " << i + 1 << "value\n";
        std::cout << "Pass Real:"; std::cin >> inputReal;
        std::cout << "Pass Imagine:"; std::cin >> inputImagine;
        
        values.at(i).setReal(inputReal);
        values.at(i).setReal(inputImagine);
    }

    return 0;
}

