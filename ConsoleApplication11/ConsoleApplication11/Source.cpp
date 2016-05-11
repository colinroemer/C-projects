//*********************************************** 
// COSC 501                               Project 2
// Colin Roemer                             DUE-DATE 3/22
// PROGRAM-NAME: Project 2
// Calculate foture investments
//*********************************************** 
/*
main {

function call();
}

function call() {

input

for (int i = 1, i < number of years; i++) {
	output accumulative value = investment amount * (1 + MonthlyInterestRate) ^ (i * 12);
	}
return 0;

}

*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int calculateValue(float investmentVal, float monthlyIntRate, float years);

int main() {

	//declare variables
	float investmentVal, monthlyIntRate, years;
	cout << fixed;

	//get input from user for all neccessary variables
	cout << "Lets calculate total future investments" << endl;

	cout << "Please enter the amount of money that was invested initially: $";
	cin >> investmentVal;

	cout << "Please enter your monthly interest rate: ";
	cin >> monthlyIntRate;

	cout << "Please enter the total number of years you are looking to invest this sum: ";
	cin >> years;

	
	//call 2nd function that will calculate everything and pring out the investment amount
	calculateValue(investmentVal, monthlyIntRate, years);
}


int calculateValue(float investmentVal, float monthlyIntRate, float years) {
	
	float exponentVal, part2OfEquationVal, accumulativeVal;
	cout << fixed;
	//cout the variables entered for the user
	cout << "The amount invested: $" << setprecision(2) << investmentVal << endl;
	cout << "Annual interest rate: " << setprecision(2) << monthlyIntRate << "%" << endl;
	
	//output table with for loop
	cout << "Years" << setw(21) << "Future value" << endl;
	cout << "-------------------------- " << endl;
	
	//use for loop to print out 1 year to the total number of years entered by the user
	for (int i = 1; i <= years; i++) {
		part2OfEquationVal = 1 + monthlyIntRate / (12 * 100);
		exponentVal = i * 12;
		accumulativeVal = investmentVal * pow(part2OfEquationVal, exponentVal);

		if (i < 10)
		{
			cout << i << setw(21) << setprecision(2) << accumulativeVal << endl;
		}

		else {
			cout << i << setw(20) << setprecision(2) << accumulativeVal << endl;
		}

		
	}
	
	return 0;

}


