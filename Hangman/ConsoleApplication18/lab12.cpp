//*********************************************** 
// COSC 501                               Lab12
// Colin Roemer                             DUE-DATE 5/9
// PROGRAM-NAME: Lab 12
//*********************************************** 

/*
main {

while loop asking if user wants to continue

}





*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float averageVal(float array[], int userArraySize);
void evenArray(float array[], int userArraySize);
void oddArray(float array[], int userArraySize);
void evenArraySum(float array[], int userArraySize);
void oddArraySum(float array[], int userArraySize);

int main() {
	char userBeginAnswer;
	int x = 0;
	const int arrayIndex = 10;
	float numbersArray[10];
	int userArraySize;

	//start do while
		do{
			// ask the user if they would like to start
			cout << "Do you want to start (Y/N): ";
			cin >> userBeginAnswer;

			//if statement for if the user says yes
			if (tolower(userBeginAnswer) == 'y') {

				//run all the other main functions
				
				//ask user for array size
				cout << "enter array size (max 10): ";
				cin >> userArraySize;

				if (userArraySize <= 10 && userArraySize >= 1) {
					
					//have user enter the numbers 
					for (int y = 0; y < userArraySize; y++) {
						cout << "Now enter number that will go in subscript " << y << " of your array with " << userArraySize << " values: " << endl;
						cin >> numbersArray[y];
					}
					cout << "The array elements are: ";
					for (int z = 0; z < userArraySize; z++) {
						cout << numbersArray[z] << " ";
					}
					cout << "\n";
					//call average function
					float averageVal_returnVal = averageVal(numbersArray, userArraySize);
					cout << "The average value = " << averageVal_returnVal << endl;

					//call the function to calculate even subscript
					evenArray(numbersArray, userArraySize);

					//call the function to calculate odd subscript
					oddArray(numbersArray, userArraySize);

					//call the function to calculate sum of even subscript
					evenArraySum(numbersArray, userArraySize);

					//call the function to calculate sum of odd subscript
					oddArraySum(numbersArray, userArraySize);
				}

				else {
					cout << "ERROR! should be positive and < 10. Please try again." << endl;
				}
			}

			//else if for no
			else if (tolower(userBeginAnswer) == 'n') {
				cout << "Have a nice day!" << endl;
				x++;
			}

			else
			{
				cout << "Invalid response...Please try again" << endl;
			}

		} while (x == 0);

}

float averageVal(float array[10], int userArraySize) {
	float averageToReturn = 0;
	//calculate average
	for (int w = 0; w < userArraySize; w++) {
		averageToReturn = averageToReturn + array[w];
	}
	averageToReturn = averageToReturn / userArraySize;
	return averageToReturn;

}

void evenArray(float array[10], int userArraySize) {

	cout << "The elements with even subscripts are:" << endl;
	cout << "Index   Value" << endl;
	cout << "=============" << endl;
	for (int j = 0; j < userArraySize; j++) {
		if (j % 2 == 0) {
			cout << "   " << j << "  " << array[j] << " " << '\n';
		}
	}
}

void oddArray(float array[10], int userArraySize) {

	cout << "The elements with odd subscripts are:" << endl;
	cout << "Index   Value" << endl;
	cout << "=============" << endl;
	for (int j = 0; j < userArraySize; j++) {
		if (j % 2 != 0) {
			cout << "   " << j << "  " << array[j] << " " << '\n';
		}
	}
}

void evenArraySum(float array[10], int userArraySize) {

	float sum1 = 0;
	
	for (int t = 0; t < userArraySize; t++) {
		if (t % 2 == 0) {
			sum1 = sum1 + array[t];
		}
	}

	cout << "The sum of the elements with even subscripts is: " << sum1 << endl;
}

void oddArraySum(float array[10], int userArraySize) {
	
	float sum2 = 0;
	
	for (int j = 0; j < userArraySize; j++) {
		if (j % 2 != 0) {
			sum2 = sum2 + array[j];
		}
	}

	cout << "The sum of the elements with even subscripts is: " << sum2 << endl;

}
