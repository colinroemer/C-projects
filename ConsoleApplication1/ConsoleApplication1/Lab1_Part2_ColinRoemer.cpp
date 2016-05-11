//*********************************************** 
// COSC 501                                LAB #2 Part 2
// Colin Roemer                             DUE-DATE 2/15
// PROGRAM-NAME: Lab2_2 
// Calculate size of pizza and cost per square inch
//*********************************************** 

#include <iostream>
using namespace std;
#include <cmath>

//declare global variable for pi
double const pi = 3.14159265;

int main() {

	//declare variables pizzaDiameter, pizzaCost, pizzaSize, ppsi
	double pizzaDiameter, pizzaCost, pizzaSize, ppsi;

	//ask the user for the diameter of the pizza
	cout << "Please enter the diameter of your pizza in inches: ";

	//save that value as variable pizzaDiameter 
	cin >> pizzaDiameter;

	//ask the user for the cost of pizza with the diameter of pizzaDiameter
	cout << "Please enter the total cost for the pizza with the diameter of " << pizzaDiameter << ": $";

	//save that value as variable pizzaCost
	cin >> pizzaCost;

	//calculate the area of a pizza
	pizzaSize = (pi * pow(pizzaDiameter, 2)) / 4;

	//calculate the price per square inch (area in in2/price)
	ppsi = pizzaCost / pizzaSize ;

	//output the area and the $ per square inch
	cout << "The total size of your pizza is " << pizzaSize << " inches squared." << endl;
	cout << "The total cost per square inch of your pizza is $" << ppsi << "." << endl;
	
	return 0;
	

}
