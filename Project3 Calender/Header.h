#pragma once
#include <iostream>
#include <string>

using namespace std;

/*PRE: MonthNumber,Year, StartDayNumber all in range
POST: 1 month's calendar printed to output stream, with day headers
I/O: No input. Output to specified stream (default to screen)
USER INTERACTION: None.
ERROR HANDLING: None. Bad input will probably produce screwy output; that hasn't been tested. */
void PrintOneMonth(int MonthNumber, int Year, int& StartDayNumber);


/*PRE: MonthNumber,Year in range
POST: returns days in that month & year, allowing for leap years.
I/O: None.
USER INTERACTION: None.
ERROR HANDLING: None. Bad input will probably produce bad results; that hasn't been tested. */
int DaysPerMonth(int MonthNumber, int Year);


/*PRE: None.
POST: Returns day of week as int (Sun = 0, Mon = 1, etc)
I/O: Screen & keyboard, no file I/O. User prompts, corrections on range
USER INTERACTION: Prompts user for day of week. Loops until valid correctly-spelled day is input.
Input is case-insensitive.
ERROR HANDLING: Loops until a valid day name is entered. Data is input as string so no problem if number
is entered. */
int GetStartDayNumber();


/*PRE: None.
POST: Returns 4-digit number that is assumed to be a year, 1000 <= Y <= 9999.
I/O: Screen/keyboard
USER INTERACTION: Prompts for year number. Expects integer input.
ERROR HANDLING: None. Entering non-numeric input will mess things up. */
int GetYear();

//Returns month with int 0-10
string GetMonth(int monthNumber);

//Prints days of week
void PrintDaysOfWeek();