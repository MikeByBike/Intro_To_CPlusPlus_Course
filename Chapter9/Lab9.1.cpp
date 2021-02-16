/*
File: Lab9.1.cpp
Author: Michalis Iona
Description: Introducing objects.
*/

#include <iostream>
#include <string>

using namespace std;

class PrintClass 
{
	public:	
		string printer;
		char charstring[50];
		void print(char* charstring);
};

void PrintClass::print(char* charstring)
{
	cout << charstring;
}

int main()

{

  char charstring[50];

  cout << "Input a character string for printing:";

  cin.get(charstring, 50);

  PrintClass printer;

  printer.print(charstring);

}