/*
File: Lab5.2.cpp
Author: Michalis Iona
Description: Comparison Operators.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string male = "m";
	const string female = "f";
	string gender;
	int age;
	cout << "Are you a male or a female (m/f):";
	cin >> gender;
    cout << "Your age:";
	cin >> age; 
	if(gender == male && age > 56 && age < 100)
	{
		cout << "You are a wise man!" << endl;
	}
	else if(gender == male && age > 0 && age < 55)
	{
		cout << "You are a man in his prime!" << endl;
	}
	else if(gender == female && age > 0 && age < 55)
	{
		cout << "You are like a blooming flower!" << endl;
	}
	else if(gender == female && age > 56 && age < 100)
	{
		cout << "You look young for your age!" << endl;
	}
	else
 	{		
		cout << "Error encountered!" << endl;
	}
	return 0;

}