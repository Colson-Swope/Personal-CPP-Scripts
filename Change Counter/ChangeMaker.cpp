// Lab 05 - Call by Reference - Change Maker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void changeMaker(int cents, int& q, int& d, int& n, int& p);

int main()
{
    int centAmount;
    int quarters;
    int dimes;
    int nickes;
    int pennies;

    std::cout << "Enter an amount of cents: ";
    std::cin >> centAmount;

    changeMaker(centAmount, quarters, dimes, nickes, pennies);
}

void changeMaker(int cents, int& q, int& d, int& n, int& p)
{
    q = cents / 25;
    cents = cents - q * 25;

    d = cents / 10;
    cents = cents - d * 10;

    n = cents / 5;
    cents = cents - n * 5;

    p = cents / 1;
    cents = cents - p * 1;

    std::cout << q << " Quarters" << "\n";
    std::cout << d << " Dimes" << "\n";
    std::cout << n << " Nickels" << "\n";
    std::cout << p << " Pennies" << "\n";
}
