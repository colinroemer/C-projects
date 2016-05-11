//*********************************************** 
// COSC 501                               Lab4
// Colin Roemer                             DUE-DATE 2/29
// PROGRAM-NAME: Lab 4
// Use Switch to take in a letter and produce a number
//*********************************************** 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

char letter1;
int number1;
int randomInt = 1;
void switch1();

void main() {

	while (randomInt == 1)
	{
		cout << "To exit the program, just type '$'" << endl << "Please enter a single CAPITALIZED letter and you will get the corresponding digit on the telephone: " << endl;
		cin >> letter1;

		switch1();
		
		if  (letter1 >= 'A' && letter1 <= 'Z') {
			if (letter1 == 'Q' || letter1 == 'Z') {
				cout << "There is no digit on the telephone that corresponds to " << letter1 << endl;
			}
			else
			{
				cout << "The digit " << number1 << " corresponds to the letter " << letter1 << " on the telephone" << endl;
			}
			
		} 

		else if (letter1 == '$') {
			randomInt++;

		}
		else {
			cout << "ERROR MESSAGE: This program does not accept numbers, symbols, or lowercase letters.  Please try again." << endl;
		}
		

	}

}

void switch1() {

	switch (letter1)
	{
	case 'A':
	case 'B':
	case 'C':
		number1 = 2;
		break;
	case 'D':
	case 'E':
	case 'F':
		number1 = 3;
		break;
	case 'G':
	case 'H':
	case 'I':
		number1 = 4;
		break;
	case 'J':
	case 'K':
	case 'L':
		number1 = 5;
		break;
	case 'M':
	case 'N':
	case 'O':
		number1 = 6;
		break;
	case 'P':
	case 'R':
	case 'S':
		number1 = 7;
		break;
	case 'T':
	case 'U':
	case 'V':
		number1 = 8;
		break;
	case 'W':
	case 'X':
	case 'Y':
		number1 = 9;
		break;
	case 'Q':
	case 'Z':
		break;
	default:
		break;
	}
}
