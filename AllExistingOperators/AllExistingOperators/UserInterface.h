#pragma once
#include <iostream>
#include <vector>

const std::string newLine = "\n";

enum class OPERATION
{
    ADD,
    SUBTRACT,
    MULTI,
    UNDEFINED
};

OPERATION receivingOperation()
{
    char chosenOperation;
    OPERATION parsedOperation;

    std::cout << "Hi" << newLine << "Please put chosen operation" << newLine;
    std::cout << "1. ADD\n";
    std::cout << "2. SUBSTRACT\n";
    std::cout << "3. MULTI\n";

    std::cin >> chosenOperation;
    switch (chosenOperation)
    {
        case '1':
            parsedOperation = OPERATION::ADD;
            break;

        case '2':
            parsedOperation = OPERATION::SUBTRACT;
            break;

        case '3':
            parsedOperation = OPERATION::MULTI;
            break;
        default:
            parsedOperation = OPERATION::UNDEFINED;
    }
    std::cout << std::endl;

    return parsedOperation;
}

class Complex;
void receivingValues(std::vector<Complex>& values)
{
    std::cout << "Hi" << newLine << "Please put your numbers" << newLine;
    for (unsigned int i = 0; i < values.size(); i++)
    {
        std::cout << newLine << "It is " << i + 1 << "value" << newLine;
        std::cin >> values.at(i);
    }
    std::cout << "\n";
}

void printingValues(std::vector<Complex>& values)
{
    std::cout << newLine << "*************************" << newLine << "Hi Your values" << newLine;
    for (unsigned int i = 0; i < values.size(); i++)
    {
        std::cout << "\nIt is " << i + 1 << "value\n";
        std::cout << values.at(i);
    }
    std::cout << "\n";
}
