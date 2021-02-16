/*
File: Lab5.1.cpp
Author: Michalis Iona
Description: Odd or Even.
*/

#include <iostream>
using namespace std;

int main() 
{
	int n1;
	cout << "Input an integer: ";
	cin >> n1;
	if(n1%2 == 0) {
		cout << "The number " << n1 << " is even." << endl;
	}
	else {
		cout << "The number " << n1 << " is odd." << endl;
	}
	
}