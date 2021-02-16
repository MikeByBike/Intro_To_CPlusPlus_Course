/*
File: Lab6.3.cpp
Author: Michalis Iona
Description: Calculating average and loop structures.
*/

#include <iostream>
using namespace std;

int main() {
	float given, sum = 0, avg;
	int n;	
	cout << "Program calculates the test grade average." << endl;
	cout << "Finish inputting with a negative number." << endl;
	while (given > 0) {
		cout << "Input grade (4-10) ";
		cin >> given;
		if (given >= 4 && given <=10) {
			n++;
        	sum += given;
    	}
	}
	avg = sum / n;
	cout << "You inputted " << n << " grades." << endl;
	cout << "Grade average: " << avg << endl;
	return 0;
}