//*********************************************** 
// COSC 501                               Lab5
// Colin Roemer                             DUE-DATE 2/29
// PROGRAM-NAME: Lab 5
//*********************************************** 



#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;
int function1(int x);


int main() {

	int userNumber;
	

	cout << "Enter a number from 1 to 8: " << endl;
	cin >> userNumber;

	int problem1_returnValue;
	problem1_returnValue = function1(userNumber);
	cout << problem1_returnValue << endl;


}

int function1(int x) {
	int finalSum = 0;

	for (int i = 1; i <= x; i++) {
		finalSum = finalSum * i;
	}
	return finalSum;
}

