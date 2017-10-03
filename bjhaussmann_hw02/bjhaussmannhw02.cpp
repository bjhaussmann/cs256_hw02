/* Haussmann, Ben
** CS256-01, Fall 2017
** Homework Assignment #2
** Description:
**	Averages two numbers a use-defined amount of times.
*/

#include "stdafx.h"
#include "iostream"

using namespace std;


int main()
{
	int iterations = 0;
	double val1, val2 = 0;


	cout << "How many pairs of integers to be read? ";
	cin >> iterations;
	cout << endl;

	for (int i = 1; i < iterations + 1; i++)
	{
		cout << "--- Iteration " << i << " ---" << endl;
		cout << "Input first value: ";
		cin >> val1;
		cout << "Input second value: ";
		cin >> val2;
		cout << "The average for " << val1 << " and " << val2 << " is " << ((val1 + val2) / 2) << endl << endl;
	}

    return 0;
}

