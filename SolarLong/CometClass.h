#pragma once

class CAMS_comet {
private:
	double Daily;
	string DateTime;
	double SolarLongitude;
public:
	CAMS_comet(string aDaily, string aDate, string aTime, string aSolarLongitude) {
		Daily = stod(aDaily);
		DateTime = aDate + " @ " + aTime;
		SolarLongitude = stod(aSolarLongitude);

	}

};

vector <CAMS_comet> dateTimeSolLong;