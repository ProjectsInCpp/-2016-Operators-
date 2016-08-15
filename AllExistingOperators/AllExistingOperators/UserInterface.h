#pragma once
#include <iostream>
#include <vector>

const std::string newLine = "\n";

class Complex;
void receivingValues(std::vector<Complex>& values, int size)
{
    std::cout << "Hi" << newLine << "Please put your numbers" << newLine;
    for (int i = 0; i < size; i++)
    {
        std::cout << newLine << "It is " << i + 1 << "value" << newLine;
        std::cin >> values.at(i);
    }
    std::cout << "\n";
}

void printingValues(std::vector<Complex>& values, int size)
{
    std::cout << newLine << "*************************" << newLine << "Hi Your values" << newLine;
    for (int i = 0; i < size; i++)
    {
        std::cout << "\nIt is " << i + 1 << "value\n";
        std::cout << values.at(i);
    }
    std::cout << "\n";
}
