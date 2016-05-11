//*********************************************** 
// COSC 501                               Lab3 Part 1
// Colin Roemer                             DUE-DATE 2/22
// PROGRAM-NAME: Lab 3
// Simple Math Problem
//*********************************************** 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int number1, number2;
	cout << fixed;

	// ask user for 2 numbers
	cout << "Please enter 2 numbers: ";

	cin >> number1 >> number2;

	// calculate modulo
	int moduloCalc = number1 % number2;

	//calculate useing integer division
	int intDivisionCalc = number1 / number2;

	//calculate useing float division
	float floatDivisionCalc = float(number1) / number2;

	//output all three calculations
	cout << number1 << " modulo " << number2 << " is equal to " << moduloCalc << endl;
	cout << number1 << " divided by " << number2 << " using integer division equals " << intDivisionCalc << endl;
	cout << number1 << " divided by " << number2 << " using floating-point division equals " << setprecision(2) << floatDivisionCalc << endl;
}