// Lab 06 - File IO - Grade Translator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> // for file I/O 
#include <string>

char translate(int numberGrade);

int main()
{
	//builds an input and output file 
	std::ifstream inFile;
	std::ofstream outFile;
	
	//open an input file 
	inFile.open("c:\\NamesGradesInput.txt");
	outFile.open("c:\\NamesGradesOutput.txt");

	std::string studentName;
	int studentGrade;

	//exit with error if open fails 
	if (inFile.fail())
	{
		std::cout << "File open failed. \n";
		system("pause");
		exit(1);
	}

	//exit with error if open fails 
	if (outFile.fail())
	{
		std::cout << "Out file failed. \n";
		system("pause");
		exit(1);
	}
		
	while (inFile >> studentName >> studentGrade)
	{
		std::cout << studentName << "\n";
		std::cout << translate(studentGrade) << "\n";
		outFile << studentName << " " << translate(studentGrade) << std::endl;
	}		
}

char translate(int numberGrade) 
{
	if (numberGrade >= 90) {
		return 'A';
	}
	if (numberGrade >= 80) {
		return 'B';
	}
	if (numberGrade >= 70) {
		return 'C';
	}
	if (numberGrade >= 60) {
		return 'D';
	}

	return 'F';
}
