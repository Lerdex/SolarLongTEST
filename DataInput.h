#pragma once
#include "CometClass.h"

vector<cometData> ucitavacPodatakaKometa(string fStreamName, int posDaily, int posDateTime, int posMjd, int posSolarLongitude, int maxPositions, char delimiter, bool doesMjdExist, bool isItCAMS, int posDay, int posMonth, int posYear, int posHours, int posMinutes, int posSeconds) {
	vector <cometData> dateTimeSolLong;
	vector <string> tempVector;
	ifstream dataInput(fStreamName);

	string tempData, tempDaily, tempDateTime, tempSolarLongitude, tempMjd, tempStr;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, delimiter);
		if (counter == maxPositions) {

			if (isItCAMS == true) {

				vector <string> tempVec;
				stringstream ssDate(tempVector[2]);
				stringstream ssTime(tempVector[3]);

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
			}
			else {
				tempDateTime = tempVector[posDateTime];
				tempYear = stoi(tempDateTime.substr(posYear, 4));
				tempMonth = stoi(tempDateTime.substr(posMonth, 2));
				tempDay = stoi(tempDateTime.substr(posDay, 2));
				tempHours = stoi(tempDateTime.substr(posHours, 2));
				tempMinutes = stoi(tempDateTime.substr(posMinutes, 2));
				tempSeconds = stoi(tempDateTime.substr(posSeconds, 2));
			}

			if (doesMjdExist == true) {
				tempMjd = tempVector[posMjd];
			}
			else {
				tempMjd = "0";
			}
			
			tempDaily = tempVector[posDaily];
			tempSolarLongitude = tempVector[posSolarLongitude];

			dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, tempMjd));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}


	return dateTimeSolLong;
}















