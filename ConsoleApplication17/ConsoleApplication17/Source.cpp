#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double basicLoop(double x, int n);
double loopRec(double x, int n);
double loopRecLog(double x, int n);

int main() {

	double x;
	int n = 0;

	cout << "To calculate the three functions, we will need to you to enter a value for X and for N" << endl;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter n: ";
	cin >> n;

	//call first function to perform a basic loop
	double basicLoop_ReturnVal = basicLoop(x, n);


	//call 2nd function that wil perform a recursive function
	double loopRec_ReturnVal = loopRec(x, n);

	//call 3rd function that will perform O(logn)
	double loopRecLog_ReturnVal = loopRecLog(x, n);

	cout << "x^n using a loop calculate to: " << basicLoop_ReturnVal << endl;
	cout << "x^n using recursion calculates to: " << loopRec_ReturnVal << endl;
	cout << "x^n using O(logn) recursion calculates to: " << loopRecLog_ReturnVal << endl;

}


double basicLoop(double x, int n) {
	double val = 1;
	for (int i = 0; i < n; i++) {
		val = x * val;
	}
	return val;

}

double loopRec(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return x * (loopRec(x, n - 1));
	}

}


double loopRecLog(double x, int n) {
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return x;
	}
	else if (n % 2 == 0) {
		return loopRecLog(x*x, n / 2);
	}
	else {
		return loopRecLog(x*x, n / 2) * x;
	}


}
