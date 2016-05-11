//*********************************************** 
// COSC 501                                LAB #2 Part 1
// Colin Roemer                             DUE-DATE 2/15
// PROGRAM-NAME: Lab2_2 
// Calculate area and perimiter 
//*********************************************** 

#include <iostream>
using namespace std;

int main() {
	//decalre variables for length and width
	float length;
	float width;

	//ask the user for the input and save the values of each input.  need to use float since some of the inputs are decimal places
	cout << "Please tpye and enter two integers for us that will allow us to calculate both perimiter and area (in yards) of a rectangular field.  Enter here: ";
	cin >> length >> width;

	//determine the perimiter and area.
	float perimiter = 2 * (length + width);
	float area = length*width;

	//print the above info.
	cout << "The perimiter of the rectangular field with the dimensions provided is " << perimiter << " yards" << endl;
	cout << "And the area of that same rectangle is " << area << " yards^2." << endl;

	return 0;

}

