/*
File: Lab8.1.cpp
Author: Michalis Iona
Description: Work hour calculator.
*/

#include <iostream>
using namespace std;
 
int main()
{
	float hours[30]; 
	double sum = 0;
	int days;
	int index;
	int array[30];
	
	
	cout << "The program calculates the total amount of" << endl;
	cout <<	"work hours during a given time frame and the average work day length." << endl;
	cout << "How many days:" << endl;
	cin >> days;
	array[index] = days;
	for(index=0; index < days; index++) {
		cout << "Input hours of workday " << index+1 << ": ";
		cin >> hours[index];
		sum += hours[index];
	}
	
	cout << "Total work hours: " << sum << endl;
	
	double average = sum / days;
	cout << "Average work day length: " << average << endl;
	
	cout << "Inputted hours: ";
	for(index=0; index < days; index++) {
		cout << hours[index] << " ";
	}
	cout << endl;
}