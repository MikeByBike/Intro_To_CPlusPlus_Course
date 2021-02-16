/*
File: Lab4.1.cpp
Author: Michalis Iona
Description: Calculator.
*/

#include <iostream>
using namespace std;

int main() 
{
    int n1, n2, Sum, Product, Difference, Quotient, Remainder;
    
    cout << "Input first integer:";
    cin >> n1;
    
    cout << "Input second integer:";
    cin >> n2;
    
    Sum = n1 + n2;
    Difference = n1 - n2;
	Product = n1 * n2;
    Remainder = n1 % n2;
	
    cout << n1 << "+" << n2 << " = " << Sum << endl;
    cout << n1 << "-" << n2 << " = " << Difference << endl;
	cout << n1 << "*" << n2 << " = " << Product << endl;
    cout << "Remainder: " << Remainder << endl;
	
    return 0;
}