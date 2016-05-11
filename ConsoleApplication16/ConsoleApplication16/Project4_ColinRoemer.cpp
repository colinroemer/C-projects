
//*********************************************** 
// COSC 501                               Project 4
// Colin Roemer                             DUE-DATE 4/24

// PROGRAM-NAME: Project 4
//********************************************** 
/*

int main(){
	
	class employee{
		int
		char
		string
		float
		float
	} array var

	read in text.txt file to class

	acces output file
	loop {
		write name to output file

		call function to provide age
		write age to output file

		call position function
		write position to output file

		calculate  salaray 
		output salary to output file

		call code function
		output code to output file

	}

}

int code(int number){

	while loop{
		codeSum = codeSum + number % 10
		number = number / 10

		RETURN number
	}
}

string posType(char position){

	Switch for position type

	return position type

}

int ageGroup(int age){


}



*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int code(int number);
string posType(char position);
int ageGroup(int age);

int main() {
	
	//declare struct and array
	struct employee
	{
		string name;
		char position;
		int age;
		float salary;
		float code;
	} emp[5];
	
	//read in txt file
	ifstream infile;
	infile.open("Text.txt");

	//for loop for each of the members of the struct, saving to array banker[]
	for (int i = 0; i < 5; i++) {
		infile >> emp[i].name;
		infile >> emp[i].position;
		infile >> emp[i].age;
		infile >> emp[i].salary;
		infile >> emp[i].code;
	}

	ofstream outfile;
	outfile.open("output.txt");
	
	//before beginning printing out the loop, we should print out the headline here
	outfile << "Name  " << "  Position   " << " Age " << "  Annual Pay  " << " Code  " << endl;
	

	//for loop printing out each member of struct BankRec that is save in the array banker[]
	for (int j = 0; j < 5; j++) {

		outfile << setw(3) << emp[j].name;
		

		//call position function
		string posType_ReturnVal = posType(emp[j].position);
		outfile << setw(14) << posType_ReturnVal;
		//call age group function
		int ageGroupFinal_ReturnVal = ageGroup(emp[j].age);
		outfile << setw(5) << ageGroupFinal_ReturnVal;

		
		//call salary function
		float finalSalary = emp[j].salary * 2080;
		outfile << setw(11) << finalSalary;
		
		//calculate code number and call code number function
		int sumCode = code(emp[j].code);
		outfile << setw(9) <<sumCode;

		outfile << "\n";

	}

	return 0;
	
}

int code(int number) {
	int codeSum = 0;

	while (number > 0) {
		codeSum = codeSum + number % 10;
		number = number / 10;
	}

	return codeSum;
}
string posType(char position) {
	ofstream outfile;
	string positionLevel;

	//write switch
	switch (position) {
	case 'A':
	case 'a':
			positionLevel = "Management";
			break;
	case 'B':
	case 'b':
		positionLevel = "Supervisor";
		break;
	case 'C':
	case 'c':
		positionLevel = "Clerical";
		break;
	default:
		positionLevel = "Unknown";
		break;
	}

	
	return positionLevel;

}

int ageGroup(int age) {
	int ageGroupFinal;

	//if else statement
	if (age < 25){
		ageGroupFinal = 1;
	} 
	else if (age > 24 && age < 41) {
		ageGroupFinal = 2;
	}
	else if (age >= 41 && age <= 65) {
		ageGroupFinal = 3;
	}
	else if (age >= 65) {
		ageGroupFinal = 4;
	}

	
	return ageGroupFinal;
}
	