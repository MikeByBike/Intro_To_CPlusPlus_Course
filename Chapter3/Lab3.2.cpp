/*
File: Lab3.2.cpp
Author: Michalis Iona
Description: Circle area.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float p = 3.142;
	int radius;
	float Area;
	
    cout << "Input circle radius:";
    cin >> radius;
    Area = p * radius * radius;
    cout << "Circle area with the given radius: " << Area << endl;
    return 0;
}