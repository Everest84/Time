#include "Time.h"
#include <cmath>

// Constructors
Time::Time() { years = 0; days = 0; hours = 0; minutes = 0; seconds = 0; }
Time::Time(int _years, int _days, int _hours, int _minutes, int _seconds)
{
	years = _years;
	days = _days;
	hours = _hours;
	minutes = _minutes;
	seconds = _seconds;
}
// Individual Modifiers
void Time::addYears(int _years) 
{ 
	years += _years; 
}
void Time::addDays(int _days)
{
	days += _days;
}
void Time::addHours(int _hours)
{
	hours += _hours;
}
void Time::addMinutes(int _minutes)
{
	minutes += _minutes;
}
void Time::addSeconds(int _seconds) 
{
	seconds += _seconds; 
}
// Operator Modifiers
const Time& Time::operator+(Time& t)
{
	Time time;
	time.years = years + t.years;
	time.days = days + t.days;
	time.hours = hours + t.hours;
	time.minutes = minutes + t.minutes;
	time.seconds = seconds + t.seconds;
	return time;
}
const Time& Time::operator-(Time& t)
{
	Time time;
	time.years = years - t.years;
	time.days = days - t.days;
	time.hours = hours - t.hours;
	time.minutes = minutes - t.minutes;
	time.seconds = seconds - t.seconds;
	return time;
}
// Compact Modifier
void Time::setTime(int _years, int _days, int _hours, int _minutes, int _seconds)
{
	years = _years; days = _days; hours = _hours; minutes = _minutes; seconds = _seconds;
}
// Methods
void Time::printTime() { cout << years << "Y : " << days << "D : " << hours << "H : " << minutes << "M : " << seconds << "S\n"; }
void Time::reduce()
{
	while (seconds > 59) { minutes += 1; seconds -= 60; }
	while (minutes > 59) { hours += 1; minutes -= 60; }
	while (hours > 23) { days += 1; hours -= 24; }
	while (days > 364) { years += 1; days -= 365; }
}

