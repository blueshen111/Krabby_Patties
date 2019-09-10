// Jordan Steer-Furderer
// CIS 25
// This program collects user input representing how many krabby patties are to be made.
// It uses the cost of the ingredients to calculate the cost of making the requested number of
// pattie based on the given recipe.
//#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
double sea_beef = 1.25;
double kelp = .50;
double tomato_slice = .10;
double bun = .07;
double secret = 1;
double KRABBY_PATTY_TOTAL = 2.92;
int num1;
cout << "how many krabby patties would you like" << endl;
cin >> num1;
cout << "the total cost of ingredients is $" << num1 * KRABBY_PATTY_TOTAL;
return 0;
}

