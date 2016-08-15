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

    std::cout << "Hi\nPlease put your numbers\n";
    for (int i = 0; i < ammountOfNumbers; i++)
    {
        std::cout << "\nIt is " << i + 1 << "value\n";
        std::cin >> values.at(i);
    }

    std::cout << "\n*************************\nHi Your values\n";
    for (int i = 0; i < ammountOfNumbers; i++)
    {
        std::cout << "\nIt is " << i + 1 << "value\n";
        std::cout << values.at(i);
    }
    std::cout << "\n";

    return 0;
}

