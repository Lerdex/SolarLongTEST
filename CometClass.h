#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
using namespace std;

class cometData {
public:
	double Daily;
	double SolarLongitude;
	double mjd;
	int hours;
	int minutes;
	int seconds;
	int day;
	int month;
	int year;

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
