#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Time
{
private:
	int years, days, hours, minutes, seconds;
public:
	// Constructors
	Time();
	Time(int _years, int _days, int _hours, int _minutes, int _seconds);
	// Individual Modifiers
	void addYears(int _years);
	void addDays(int _days);
	void addHours(int _hours);
	void addMinutes(int _minutes);
	void addSeconds(int _seconds);
	// Operator Modifier
	const Time& operator+(Time& t);
	const Time& operator-(Time& t);
	// Compact Modifier
	void setTime(int _years, int _days, int _hours, int _minutes, int _seconds);
	// Methods
	void printTime();
	void reduce();
};