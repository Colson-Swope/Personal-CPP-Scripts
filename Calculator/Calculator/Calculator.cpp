// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void AddNumbers() {
    int numberOne;
    int numberTwo;
    int result;

    std::cout << "First Number: ";
    std::cin >> numberOne;

    std::cout << "Second Number: ";
    std::cin >> numberTwo;

    result = numberOne + numberTwo;
    std::cout << result;
}

void SubtractNumbers() {
    int numberOne;
    int numberTwo;
    int result;

    std::cout << "First Number: ";
    std::cin >> numberOne;

    std::cout << "Second Number: ";
    std::cin >> numberTwo;

    result = numberOne - numberTwo;
    std::cout << result;
}

void MultiplyNumbers() {
    int numberOne;
    int numberTwo;
    int result;

    std::cout << "First Number: ";
    std::cin >> numberOne;

    std::cout << "Second Number: ";
    std::cin >> numberTwo;

    result = numberOne * numberTwo;
    std::cout << result;
}

void DivideNumbers() {
    int numberOne;
    int numberTwo;
    int result;

    std::cout << "First Number: ";
    std::cin >> numberOne;

    std::cout << "Second Number: ";
    std::cin >> numberTwo;

    result = numberOne / numberTwo;
    std::cout << result;
}

int main()
{
    char selectedOperation;

    std::cout << "What do you want to do?\n";
    std::cout << "(A)dd, (S)ubtract, (M)ultiply, or (D)ivide? \n";
    std::cin >> selectedOperation;

    if (selectedOperation == 'A') {
        AddNumbers();
    }
    if (selectedOperation == 'S') {
        SubtractNumbers();
    }
    if (selectedOperation == 'M') {
        MultiplyNumbers();
    }
    if (selectedOperation == 'D') {
        DivideNumbers();
    }
}