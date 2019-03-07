#pragma once
#include <iostream>
#include <string>

using namespace std;


void PrintOneMonth(int MonthNumber, int Year, int StartDayNumber);

int DaysPerMonth(int MonthNumber, int Year);

int GetStartDayNumber();

int GetYear();

string GetMonth(int monthNumber);
void PrintDaysOfWeek();