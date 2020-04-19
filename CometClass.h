#pragma once
#include <string>
#include <ctime>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class cometData {
private:
	double Daily;
	double SolarLongitude;
	double mjd;
	int hours;
	int minutes;
	int seconds;
	int day;
	int month;
	int year;
public:
	cometData(std::string aDaily, std::string aSolarLongitude, int aDay, int aMonth, int aYear, int aSeconds, int aMinutes, int aHours, string aMjd) {
		Daily = stod(aDaily);
		SolarLongitude = stod(aSolarLongitude);
		mjd = stod(aMjd);
		day = aDay;
		month = aMonth;
		year = aYear;
		seconds = aSeconds;
		minutes = aMinutes;
		hours = aHours;
		
	}
};
