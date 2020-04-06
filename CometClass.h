#pragma once
#include <string>
#include <iostream>
using namespace std;

class CAMS_comet {
private:
	double Daily;
	std::string DateTime;
	double SolarLongitude;
public:
	CAMS_comet(std::string aDaily, std::string aDate, std::string aTime, std::string aSolarLongitude) {
		Daily = stod(aDaily);
		DateTime = aDate + " @ " + aTime;
		SolarLongitude = stod(aSolarLongitude);
		cout << Daily << endl;
		cout << DateTime << endl; 
		cout << SolarLongitude << endl; 
		cout << endl;
	}

};

