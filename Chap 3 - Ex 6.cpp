// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	std::cout << " Please enter three integer values and hit Enter \n";
	std::cin >> val1 >> val2 >> val3;

	if (val1 <= val2 and val1 <= val3 and val2 <= val3) 
		std::cout << "The sequence is: " << val1 << ", " << val2 << ", " << val3 << "\n";
	if (val1 >= val2 and val1 <= val3 and val2 <= val3)
		std::cout << "The sequence is: " << val2 << ", " << val1 << ", " << val3 << "\n";
	if (val1 >= val2 and val1 >= val3 and val2 <= val3)
		std::cout << "The sequence is: " << val2 << ", " << val3 << ", " << val1 << "\n";
	if (val1 <= val2 and val1 <= val3 and val2 >= val3)
		std::cout << "The sequence is: " << val1 << ", " << val3 << ", " << val2 << "\n";
	if (val1 <= val2 and val1 >= val3 and val2 >= val3)
		std::cout << "The sequence is: " << val3 << ", " << val1 << ", " << val2 << "\n";
	if (val1 >= val2 and val1 >= val3 and val2 >= val3)
		std::cout << "The sequence is: " << val3 << ", " << val2 << ", " << val1 << "\n";

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
