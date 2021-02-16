/*
File: Lab3.1.cpp
Author: Michalis Iona
Description: Dollar to Euro exchange code.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float euro_rate = 0.727802;
    float user_amount,
          dollar_to_euro;

    cout << "How much dollars do you want to exchange:";
    cin >> user_amount;
    dollar_to_euro = user_amount * euro_rate;

    cout << "Amount in euros: " << dollar_to_euro << endl;
    return 0;
}