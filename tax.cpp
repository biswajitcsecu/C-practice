

#include <iostream>
#include <cstdlib>

using namespace std;


int main ( )
{
// Declaration and initialization
	double income, tax ;
	bool bracket1, bracket2, bracket3, bracket4;
	double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00;
	double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;

// Input
	cout << "Enter income in dollars: " ;
	cin >> income;
// Defining brackets
	bracket1 = (income <= limit1) && (income >=0) ;
	bracket2 = (income > limit1) && (income <= limit2);
	bracket3 = (income > limit2) && (income <= limit3);

	bracket4 = (income > limit3);
// Calculating tax

	if (bracket1)
	{
		tax = income * rate1;
	}
	else if (bracket2)
	{
		tax = limit1 * rate1 + (income - limit1) * rate2 ;
	}
	else if (bracket3)
	{
		tax = limit1 * rate1 + (limit2 - limit1) * rate2 +	(income - limit2) * rate3 ;
	}
	else if (bracket4)
	{
		tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (limit3-limit2) * rate3 + (income - limit3) * rate4 ;
	}
	else
	{
		cout << "Error! Invalid income!";
		return 0;
	}
// Printing income and tax

	cout << "Income: " << income << endl;
	cout << "\nTax due: " << tax;
	return 0;
}