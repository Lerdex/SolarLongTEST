#pragma once
#include <string>
<<<<<<< HEAD
#include <ctime>
#include <sstream>
#include <iostream>
#include <vector>
=======
#include <iostream>
>>>>>>> 5c6fa846a68366887f4500a06043aff4f3c35b5a
using namespace std;

class cometData {
private:
	double Daily;
	double SolarLongitude;
	int hours;
	int minutes;
	int seconds;
	int day;
	int month;
	int year;
public:
	cometData(std::string aDaily, std::string aDate, std::string aTime, std::string aSolarLongitude) {
		Daily = stod(aDaily);
		SolarLongitude = stod(aSolarLongitude);


		std::stringstream ssDate(aDate);
		std::stringstream ssTime(aTime);
		vector <std::string> tempVec;
		string temporaryStr;

		while (ssDate.good())
		{			
			getline(ssDate, temporaryStr, '.');
			tempVec.push_back(temporaryStr);
		}
		month = stoi(tempVec[0]);
		day = stoi(tempVec[1]);
		year = 2000 + stoi(tempVec[2]);
		tempVec.clear();
		while (ssTime.good())
		{
			getline(ssTime, temporaryStr, ':');
			tempVec.push_back(temporaryStr);
		}
		hours = stoi(tempVec[0]);
		minutes = stoi(tempVec[1]);
		seconds = stoi(tempVec[2]);
		tempVec.clear();


		cout << Daily << endl;
		cout << DateTime << endl; 
		cout << SolarLongitude << endl; 
		cout << endl;

	}

};

