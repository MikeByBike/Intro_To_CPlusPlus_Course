/*
File: Lab5.3.cpp
Author: Michalis Iona
Description: Comparison Operators with calculations.
*/

#include <iostream>
using namespace std;

int main() 
{
    int choice, n1, n2, addition, multiplication, subtraction, division, Remainder;
    cout << "Choose desired calculation:" << endl;
	cout << "1: subtraction" << endl;
	cout << "2: addition" << endl;
	cout << "3: multiplication" << endl;
	cout << "4: division" << endl;
	cout << "5: Remainder" << endl;
	
	cout << "Choose a calculation:";
	cin >> choice;
	
	cout << "Input first number:";
    cin >> n1;
    
    cout << "Input second number:";
    cin >> n2;
	
		if (choice == 1)
		{
			subtraction = n1 - n2;
			cout << n1 << "-" << n2 << " = " << subtraction << endl;
		}
		else if (choice == 2)
		{
			addition = n1 + n2;
			cout << n1 << "+" << n2 << " = " << addition << endl;
		}
		else if (choice == 3)
		{
			multiplication = n1 * n2;
			cout << n1 << "*" << n2 << " = " << multiplication << endl;
		}
		else if (choice == 4)
		{
			division = n1 / n2;
			cout << n1 << "/" << n2 << " = " << division << endl;
		}
		else if (choice == 5)
		{
			Remainder = n1 % n2;
			cout << "Remainder: " << Remainder << endl;
		}
    return 0;
}			