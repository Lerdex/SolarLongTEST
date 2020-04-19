#pragma once
#include "CometClass.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
//this is for the CAMS database


void ucitavacPodatakaKometaCAMS(std::string fStreamName, int posDaily, int posDate, int posTime, int posSolarLongitude, int maxPositions, char delimiter) {
	vector <cometData> dateTimeSolLong;
	ifstream dataInput(fStreamName);
	vector <std::string> tempVector;  
	std::string tempData, tempDaily, tempSolarLongitude, tempDate, tempTime;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;
	vector <std::string> tempVec;
	string temporaryStr;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, delimiter);
		if (counter == maxPositions) {

			tempDaily = tempVector[posDaily];
			tempDate = tempVector[posDate];
			tempTime = tempVector[posTime];
			tempSolarLongitude = tempVector[posSolarLongitude];

			std::stringstream ssDate(tempDate);
			std::stringstream ssTime(tempTime);
			

			while (ssDate.good())
			{
				getline(ssDate, temporaryStr, '.');
				tempVec.push_back(temporaryStr);
			}
			tempMonth = stoi(tempVec[0]);
			tempDay = stoi(tempVec[1]);
			tempYear = 2000 + stoi(tempVec[2]);
			tempVec.clear();
			while (ssTime.good())
			{
				getline(ssTime, temporaryStr, ':');
				tempVec.push_back(temporaryStr);
			}
			tempHours = stoi(tempVec[0]);
			tempMinutes = stoi(tempVec[1]);
			tempSeconds = stoi(tempVec[2]);
			tempVec.clear();

			dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, 0));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}
	

		
}
	










	



