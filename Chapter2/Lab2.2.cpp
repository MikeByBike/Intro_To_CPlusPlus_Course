/*
File: Lab2.2.cpp
Author: Michalis Iona
Description: Reading 2 inputs and outputting sum.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n1;
	int n2;
	int sum;

	cout << "Type the first number:";
	cin >> n1;
	cout << "Type the second number:";
	cin >> n2;   	
    sum = n1 + n2;
    cout << "Sum of the numbers is "<< sum << endl;
	return 0;
}