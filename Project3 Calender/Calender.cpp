#include <iostream>
#include "Header.h"

using namespace std;



int main() {

	int yearInput;
	int dayInput;
	int monthsInYear = 13;

	yearInput = GetYear();

	dayInput = GetStartDayNumber();

	for (int i = 1; i < monthsInYear; i++)
	{
		PrintOneMonth(i, yearInput, dayInput);
		cout << endl;

	}


}