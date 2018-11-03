// Chap3Exercise4and5.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
	int val1 = 0;  // intialize val1
	int val2 = 0;  // initialize val2
	
	std::cout << "Please enter two integer values: \n";
	std::cin >> val1 >> val2;
	
	if (val1 < val2)         // determining the values of val1 and val2
		std::cout << val1 << " is less than " << val2 <<"\n";
		std::cout << val2 << " is greater than " << val1 <<"\n";
	if (val2 < val1)
		std::cout << val2 << " is less than " << val1 << "\n";
		std::cout << val1 << " is greater than " << val2 << "\n";
	if (val1 == val2)
		std::cout << val1 << " is equal to " << val2 << "\n";
		
	std::cout << "The sum is: " << val1 + val2 << "\n";
	std::cout << "The difference is: " << abs(val1 - val2) << "\n";
	std::cout << "The product is: " << val1 * val2 << "\n";
	std::cout << "The ratio is: " << val1 / val2 << "\n";



    return 0;
}

