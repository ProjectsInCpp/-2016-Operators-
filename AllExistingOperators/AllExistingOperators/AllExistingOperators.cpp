// AllExistingOperators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"

const std::string newLineSeparator = "\n";

int main()
{
    Complex number1{ 1,2 };
    Complex number2{ 2,1 };

    std::cout << "number1: " << number1 << newLineSeparator;
    std::cout << "number2: " << number2 << newLineSeparator;

    return 0;
}

