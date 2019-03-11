#include <iostream>
#include "Header.h"

using namespace std;



int main() {

	//Declare variables
	int yearInput;
	int dayInput;
	int monthsInYear = 12;


	//Get input
	yearInput = GetYear();

	dayInput = GetStartDayNumber();


	//Print Calander
	for (int i = 0; i < monthsInYear; i++)
	{
		PrintOneMonth(i, yearInput, dayInput);
		cout << endl;

	}


}