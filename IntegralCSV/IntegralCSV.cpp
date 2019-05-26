/*
See ReadMe Notes

*/

#include "pch.h"
#include <iostream>
#include <fstream>
#include <math.h>
#include <string>

using namespace std;

int x = 0;
int y = 0; //F(x)
int PrimeOfX = 0; //F'(X)
int DoublePrimeOfX = 0; //F"(X)


int main()
{
	int count = 0;
	int answer = 0;
	string fileName = "";

	cout << "Do you want to input a file?\n"
		<< "1. Yes \n2. No\n" << endl;
	cin >> answer;
	if (answer == 1)
	{
		ofstream FirstFile;
		cout << "Enter file name with .csv" << endl;
		cin >> fileName;
		cout << "You entered: " << fileName << endl;
		FirstFile.open(fileName);
		FirstFile << "Hello I think this worked!!!";
		FirstFile.close();
	}

	//cout << "" << endl;
	while (count != 10) {
		switch (count)
		{
		case 0:
			cout << "Do you want to input a file?\n"
				<< "1. Yes \n2. No\n" << endl;
			cin >> count;
		default:
			if (count == 10) {
				break;
			}
			cout << "Enter 10 to exit or 9 to Ask Questions" << endl;
			cin >> count;
		}
	}
	ofstream FirstFile;
	FirstFile.open("");


    
}


