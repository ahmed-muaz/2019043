// task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
int calculatePower(int, int);
int main()
{
	int base, powerRaised, result;
	cout << "Enter base number: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> powerRaised;

	result = calculatePower(base, powerRaised);
	cout << base << "^" << powerRaised << " = " << result;

	return 0;
}
int calculatePower(int base, int powerRaised)
{
	if (powerRaised != 0)
		return (base * calculatePower(base, powerRaised - 1));
	else
		return 1;
}

