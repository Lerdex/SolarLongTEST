#pragma once
#include "DataInput.h"

vector <cometData> cometDataPickerCAMS(string fStreamName, char delimiter, int expectedColumnsCount) {
	vector <cometData> dateTimeSolLong;
	vector <vector<string>> vectorOfVectors = ucitavacPodatakaKometa(fStreamName, delimiter, expectedColumnsCount);
	string tempDaily, tempSolarLongitude, tempStr;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;

	for (int i = 0; i < vectorOfVectors.size(); i++) {
		vector <string> tempVec;
		stringstream ssDate(vectorOfVectors[i][2]);
		stringstream ssTime(vectorOfVectors[i][3]);

		while (ssDate.good())
		{
			getline(ssDate, tempStr, '.');
			tempVec.push_back(tempStr);
		}

		tempMonth = stoi(tempVec[0]);
		tempDay = stoi(tempVec[1]);
		tempYear = 2000 + stoi(tempVec[2]);
		tempVec.clear();

		while (ssTime.good())
		{
			getline(ssTime, tempStr, ':');
			tempVec.push_back(tempStr);
		}
		tempHours = stoi(tempVec[0]);
		tempMinutes = stoi(tempVec[1]);
		tempSeconds = stoi(tempVec[2]);
		tempVec.clear();

		tempDaily = vectorOfVectors[i][1];
		tempSolarLongitude = vectorOfVectors[i][57];

		dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, "0"));
	}
	return dateTimeSolLong;
}

vector <cometData> cometDataPickerEDMONDiSONOTACO(string fStreamName, char delimiter, int expectedColumnsCount) {
	vector <cometData> dateTimeSolLong;
	vector <vector<string>> vectorOfVectors = ucitavacPodatakaKometa(fStreamName, delimiter, expectedColumnsCount);
	string tempDaily, tempDateTime, tempSolarLongitude, tempStr, tempMjd;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;
	for (int i = 0; i < vectorOfVectors.size(); i++) {

		tempDateTime = vectorOfVectors[i][2];
		tempYear = stoi(tempDateTime.substr(1, 4));
		tempMonth = stoi(tempDateTime.substr(5, 2));
		tempDay = stoi(tempDateTime.substr(7, 2));
		tempHours = stoi(tempDateTime.substr(10, 2));
		tempMinutes = stoi(tempDateTime.substr(12, 2));
		tempSeconds = stoi(tempDateTime.substr(14, 2));

		tempDaily = vectorOfVectors[i][1];
		tempSolarLongitude = vectorOfVectors[i][4];
		tempMjd = vectorOfVectors[i][3];

		dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, tempMjd));
	}
	return dateTimeSolLong;
}

vector <cometData> cometDataPickerGMN(string fStreamName, char delimiter, int expectedColumnsCount) {
	vector <cometData> dateTimeSolLong;
	vector <vector<string>> vectorOfVectors = ucitavacPodatakaKometa(fStreamName, delimiter, expectedColumnsCount);
	string tempDaily, tempDateTime, tempSolarLongitude, tempStr;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;
	for (int i = 0; i < vectorOfVectors.size(); i++) {

		tempDateTime = vectorOfVectors[i][1];
		tempYear = stoi(tempDateTime.substr(2, 4));
		tempMonth = stoi(tempDateTime.substr(6, 2));
		tempDay = stoi(tempDateTime.substr(9, 2));
		tempHours = stoi(tempDateTime.substr(12, 2));
		tempMinutes = stoi(tempDateTime.substr(15, 2));
		tempSeconds = stoi(tempDateTime.substr(18, 2));

		tempDaily = vectorOfVectors[i][2];
		tempSolarLongitude = vectorOfVectors[i][4];


		dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, "0"));
	}
	return dateTimeSolLong;
}