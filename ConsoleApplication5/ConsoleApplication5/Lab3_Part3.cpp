//*********************************************** 
// COSC 501                               Lab3 Part 3
// Colin Roemer                             DUE-DATE 2/22
// PROGRAM-NAME: Lab 3
// Calculate Grades
//*********************************************** 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	cout << fixed;

	//declare the variables that are going to be used
	float test1_score, test2_score, final_score, assignments, total_score;

	//ask for the inputs
	cout << "Out of 100, what did you get on your first test: ";
	cin >> test1_score;

	cout << "Out of 100, what did you get on your second test: ";
	cin >> test2_score;

	cout << "Out of 100, what did you get on your Final: ";
	cin >> final_score;

	cout << "Out of 100, what did you get on your assignments: ";
	cin >> assignments;

	//calculate the total score
	total_score = .15 * test1_score + .15 * test2_score + .4 * final_score + .3 * assignments;

	//output results
	cout << "the student's total score is: " << setprecision(2) << total_score << endl;


	return 0;
}