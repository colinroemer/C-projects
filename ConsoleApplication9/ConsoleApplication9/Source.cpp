//*********************************************** 
// COSC 501                               Lab6
// Colin Roemer                             DUE-DATE 3/14
// PROGRAM-NAME: Lab 6
//*********************************************** 




#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int labProblem1(int x);
int labProblem2();

int main() {

	int userInput1;
	int loopNumber = 1;
	
	
	while (loopNumber == 1) {
		cout << "Press 1 to try function 1 and 2 to see function 2 and enter 0 to exit: " << endl;
		cin >> userInput1;
		cout << userInput1 << endl;

		if (userInput1 == 1) {
			int N;
			cout << "Please enter a number from 1-8: " << endl;
			cin >> N;
			int problem1_ReturnValue;
			if (N > 0 && N < 9) {

				problem1_ReturnValue = labProblem1(N);
				cout << "The sum of all digits from 1 up to " << N << " is: " << problem1_ReturnValue << endl;
			}
			else {
				cout << "Error! Number entered was not between 1 and 8.  Please try again." << endl;

			}

		}
		else if (userInput1 == 2) {
			//function 2

			labProblem2();
			

		}


		else if (userInput1 == 0) {
			
			loopNumber++;
		}
	}
	
	
}


int labProblem1(int x) {

	int finalSum = 1;

	for (int i = 1; i <= x; i++) {
		finalSum = finalSum * i;

	}

	return finalSum;
}

int labProblem2() {
	int N;
	cout << "Let's build a triangle out of '*'s..." << "\n" << "How many stars do you want on the bottom (longest) row?" << " \n" << "Enter a number between 5 and 21" << endl;
	cin >> N;
	if (N >= 5 && N <= 25) {

		for (int i = 1; i <= N; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "*";
			}
			cout << "\n";
		}
		return 0;
	}
	else {
		cout << "Error: you did not type in a number between 5 and 25!" << endl;
	}
}


