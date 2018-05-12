#include <iostream>
#include <string>

#include "NumDays.h"

using namespace std;


int main()
{
	double hoursWorked;


	
	NumDays hours(24.00);
	NumDays hours2(12.00);
	NumDays hours3;

	hours3 = hours + hours2;
	cout << "Adding 2 hour objects together using overloading." << endl;

	cout << hours3.getHours() << endl;

	hours3 = hours - hours2;
	cout << "Subtracting 2 hour objects together using overloading." << endl;

	cout << hours3.getHours() << endl;

	hours3 = ++hours;
	cout << "incrementing using operator overloading" << endl;

	cout << hours3.getHours() << endl;

	hours3 = --hours;

	cout << "Decrementing using operator overloading" << endl;

	cout << hours3.getHours() << endl;




	return 0;
}