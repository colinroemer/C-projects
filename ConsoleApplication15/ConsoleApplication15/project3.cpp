//*********************************************** 
// COSC 501                               Project 3
// Colin Roemer                             DUE-DATE 4/7
// PROGRAM-NAME: Project 3
//*********************************************** 

/*

int main {


while (x <=  1 )
	input feet and inches - press "$" to exit

	if feet < 0 {
		error: enter number above 0
	}

	else if inches is < 0 || inches > 12 {
	 error: inches needs to be between 0 and 12
	}
	else if (user inputs $){
		x++;
	}
	else {
		
		calculateFunction(feet, inches);
		outputFunction(float totalMeters);
	}


int calculateFunction(feet, inches) {
	float feetToMeters = feet * .3048 
	float inchesToMeters = inches * something

	total meters = feetToMeters + inchesToMeters;
	return totalMeters;
}

int outputFunction {
	output the meters to a set precision of 5 decimal places
	return 0;
}
	

*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float calculationFunction(int userInputFeet, int userInputInches);
float outputFunction(float meters, int userInputFeet, int userInputInches);



int main() {
	
	//declare variables
	int x = 0;
	int userInputFeet, userInputInches, yesOrNo;

	//ask the user if they would like to calculate feet and inches to meters
	cout << "This application allows you to enter feet and inches and we will calculate that into meters for you.  Press 1 to proceed with the function or press 2 to end the function: " << endl;
	cin >> yesOrNo;

	//check to make sure that the input the user entered is valid
	if (yesOrNo == 1) {

		//start while loop
		while (x == 0) {
			cout << "Please enter the lenth in feet that we will use to calculate meters.  make sure that this number is above 0: " << endl;
			cin >> userInputFeet;

			cout << "Please enter the lenth in inches that we will use for our calculation.  This number need to be a whole number above 0 and equal to or below 12: " << endl;
			cin >> userInputInches;

			//write an if statement to check to make sure feet entered is valid
			if (userInputFeet < 0) {
				cout << "The number you entered for feet is less than ZERO. Please try again." << endl;
			}

			//write else if statement to check inches to make sure its above 0 and below 12
			else if (userInputInches > 12 || userInputInches < 0) {
				cout << "The number you eneterd in inches is incorrect.  Please try again." << endl;
			}
			else {
				float meters = calculationFunction(userInputFeet, userInputInches);
				float something =  outputFunction(meters, userInputFeet, userInputInches);

				//ask the user if they want to go again or exit.
				int userAnswer;
				cout << "Would you like to calculate a new set of numbers?  Enter 1 to try again and 0 to exit: " << endl;
				cin >> userAnswer;

				//check userAnswer
				if (userAnswer == 0) {
					x++;
				}
				else if (userAnswer != 0 || userAnswer != 1) {
					cout << "ERROR: You did not enter a 0 or a 1" << endl;
				}

			}
		}
	}
	else if (yesOrNo == 2) {
		cout << "FINE!! DONT CALCULATE FEET AND INCHES TO METERS!!! WE DONT CARE!" << endl;
	}
	else {
		cout << "Looks like the number you entered is neither 1 nor 0. OOOOOOPPSS" << endl;
		main();
	}


}



float calculationFunction(int userInputFeet, int userInputInches) {

	//write formula to calculate inches to feet
	float inchesTofeet = userInputInches / 12;

	//add both sets of feet together
	float totalFeet = userInputFeet + inchesTofeet;

	//write formula to calculate feet to meters
	float feetToMeters = totalFeet * .3048;

	//return totalMeters;
	return feetToMeters;
}

float outputFunction(float meters, int userInputFeet, int userInputInches) {
	//output the meters to a set precision of 5 decimal places
	cout << userInputFeet << " feet & " << userInputInches << " inches is equal to " << setprecision(5) << meters << "meters." << endl;

	return 0;
}


