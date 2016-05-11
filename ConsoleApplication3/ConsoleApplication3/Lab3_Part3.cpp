//*********************************************** 
// COSC 501                               Lab3 Part 2
// Colin Roemer                             DUE-DATE 2/22
// PROGRAM-NAME: Lab 3
// 
//*********************************************** 

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	cout << fixed;

	//declare the variables that are going to be used
	int singles, doubles, triples, homeruns, bats;

	//ask for the inputs
	cout << "Please enter the players total number of singles: ";
	cin >> singles;

	cout << "Please enter the players total number of doubles: ";
	cin >> doubles;

	cout << "Please enter the players total number of triples: ";
	cin >> triples;

	cout << "Please enter the players total number of home runs: ";
	cin >> homeruns;

	cout << "Please enter the players total number of at bats: ";
	cin >> bats;

	//calculate slugging percentage
	float slugging = float(singles + 2 * doubles + 3 * triples + 4 * homeruns) / bats;

	float sluggingPercent = slugging * 1000;

	//output
	cout << "the expected result is " << setprecision(3) << slugging << endl;
	//cout << "while the expected result is " << slugging << ", slugging percent is meant to be given as a percentage, so the actual slugging percent of this player is: " << setw(0) << sluggingPercent << "%" << endl;

	return 0;
}