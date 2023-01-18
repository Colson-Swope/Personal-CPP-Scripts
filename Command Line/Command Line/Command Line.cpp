// Command Line.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int main()
{
    char command;

    std::cout << "Welcome to the terminal.\n";
    std::cout << "Type 'h' for help. \n \n";
    
    do
    {
        std::cout << "Enter a command: ";
        std::cin >> command;

        switch (command) {
        case 'h':
            std::cout << "Placeholder help screen. \n";
        case 'q':
            abort;
        }

        
    } while (true);
    

    return 0;

}

