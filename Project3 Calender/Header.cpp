#include "Header.h"
#include <iostream>
#include <string>
#include <cstring>
#include <ios>;
#include <iomanip>

using namespace std;

void PrintOneMonth(int MonthNumber, int Year, int StartDayNumber)
{
	/*PRE: MonthNumber,Year, StartDayNumber all in range
	POST: 1 month's calendar printed to output stream, with day headers
	I/O: No input. Output to specified stream (default to screen)
	USER INTERACTION: None.
	ERROR HANDLING: None. Bad input will probably produce screwy output; that hasn't been tested. */


	
		cout << GetMonth(MonthNumber);
		PrintDaysOfWeek();
		cout << DaysPerMonth(MonthNumber, Year) << endl;

		int startDay = 0;
		int DaysInWeek = 7;

		// loops number of days per month prints day of month

		for (int i = 0; i < DaysPerMonth(MonthNumber, Year) ; ++i)
		{
			// loops every 7 days
			for (int j = 0; j < DaysInWeek; j++)
			{
				//print spaces before start day
				for (startDay; startDay < StartDayNumber; startDay++)
				{
					cout << setw(5) << left << ' ' << " ";
					j++;
				}

				cout << setw(5) << left << ++i << " ";

				//breaks when total days are met
				if (i == DaysPerMonth(MonthNumber, Year))
				{
					break;
				}

			}
			cout << endl;

	

		}



	
	

}

int DaysPerMonth(int MonthNumber, int Year)
{
	/*PRE: MonthNumber,Year in range
	POST: returns days in that month & year, allowing for leap years.
	I/O: None.
	USER INTERACTION: None.
	ERROR HANDLING: None. Bad input will probably produce bad results; that hasn't been tested. */

	bool leapYear = false;

	if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
		leapYear = true;
	}
	switch (MonthNumber)
	{
	case 1:

		return 31;

	case 2:

		if (leapYear == true)
		{
			cout << "Is leap ";
			return 29;
		}
		else
		{
			return 28;
		}
	case 3:

		return 31;

	case 4:

		return 30;

	case 5:

		return 31;
	case 6:

		return 30;
	case 7:

		return 31;
	case 8:

		return 31;
	case 9:

		return 30;
	case 10:

		return 31;
	case 11:

		return 30;
	case 12:

		return 31;

	default:
		cout << "Invalid month";
		break;
	}

}

int GetStartDayNumber()
{
	/*PRE: None.
	POST: Returns day of week as int (Sun = 0, Mon = 1, etc)
	I/O: Screen & keyboard, no file I/O. User prompts, corrections on range
	USER INTERACTION: Prompts user for day of week. Loops until valid correctly-spelled day is input.
	Input is case-insensitive.
	ERROR HANDLING: Loops until a valid day name is entered. Data is input as string so no problem if number
	is entered. */

	string userInput;
	bool asking = true;

	while (asking) {
		cout << "\nWhat day of the week does Jan 1 fall on this year? \n";

		cin >> userInput;


		//userInput = toupper(userInput);

		if (userInput == "SUNDAY" )
		{
			return 0;
		}

		else if (userInput == "MONDAY")
		{
			return 1;
		}

		else if (userInput == "TUESDAY")
		{
			return 2;
		}

		else if (userInput == "WEDNESDAY")
		{
			return 3;
		}

		else if (userInput == "THURSDAY")
		{
			return 4;
		}

		else if (userInput == "FRIDAY")
		{
			return 5;
		}

		else if (userInput == "SATURDAY")
		{
			return 6;
		}

		else
		{
			cout << "\nPlease enter  a day of the week. Example monday, tuesday...\n";
		}
	
	
	
	}

}


int GetYear()
{
	/*PRE: None.
	POST: Returns 4-digit number that is assumed to be a year, 1000 <= Y <= 9999.
	I/O: Screen/keyboard
	USER INTERACTION: Prompts for year number. Expects integer input.
	ERROR HANDLING: None. Entering non-numeric input will mess things up. */

	int userInput;
	bool asking = true;

	while (asking)
	{
		//Returns 4-digit number that is assumed to be a year, 1000 <= Y <= 9999.

		cout << "Enter year (must be in range 1000 <= Year <= 9999):";

		cin >> userInput;

		if (userInput >= 1000 && userInput <= 9999)
		{
			return userInput;
		}

		cout << "\n\nYear must be bewtween 1000 and 1999\n\n";


	}

	return userInput;
}

string GetMonth(int monthNumber)
{
	if (monthNumber == 0)
		return "JANUARY";
	else if (monthNumber == 1)
		return "FEBRUARY";
	else if (monthNumber == 2)
		return "MARCH";
	else if (monthNumber == 3)
		return "APRIL";
	else if (monthNumber == 4)
		return "MAY";
	else if (monthNumber == 5)
		return "JUNE";
	else if (monthNumber == 6)
		return "JULT";
	else if (monthNumber == 7)
		return "AUGUST";
	else if (monthNumber == 8)
		return "SEPTEMBER";
	else if (monthNumber == 9)
		return "OCTOBER";
	else if (monthNumber == 10)
		return "NOVEMBER";
	else // (weekday == 6)
		return "DECEMBER";

	return string();
}

void PrintDaysOfWeek()
{
	cout  << endl;
	cout << setw(6) << "Sun";
	cout << setw(6) << "Mon";
	cout << setw(6) << "Tue";
	cout << setw(6) << "Wed";
	cout << setw(6) << "Thu";
	cout << setw(6) << "Fri";
	cout << setw(6) << "Sat";
	cout << endl;
}

