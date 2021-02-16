/*
File: Lab6.2.cpp
Author: Michalis Iona
Description: Factorial.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long factorial = 1;

    cout << "Input an integer:";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <=n; ++i) {
            factorial *= i;
        }
        cout << "The factorial of number " << n << " is " << factorial << endl;    
    }

    return 0;
}