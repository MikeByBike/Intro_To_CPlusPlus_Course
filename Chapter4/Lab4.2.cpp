/*
File: Lab4.2.cpp
Author: Michalis Iona
Description: Calculating hypotenuse.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	float n1, n2;
    
    cout << "Input first triangle leg:";
    cin >> n1;
    cout << "Input second triangle leg:";
    cin >> n2;
	
	
    cout << "Hypotenuse length: " <<  sqrt(n1*n1+n2*n2) << endl;
	
    return 0;
}

