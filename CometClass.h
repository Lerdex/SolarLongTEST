#pragma once
#include <string>

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

	}

};

