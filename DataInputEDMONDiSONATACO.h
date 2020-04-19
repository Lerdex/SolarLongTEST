#pragma once
#include "CometClass.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;



void ucitavacPodatakaKometaEDMONDiSONATACO(std::string fStreamName, int posDaily, int posDateTime, int posMjd, int posSolarLongitude, int maxPositions, char delimiter) {
	vector <cometData> dateTimeSolLong;
	ifstream dataInput(fStreamName);
	vector <std::string> tempVector;
	vector <std::string> tempVec;
	std::string tempData, tempDaily, tempDateTime, tempSolarLongitude, tempMjd;
	int tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, delimiter);
		if (counter == maxPositions) {

			tempDateTime = tempVector[posDateTime];
			tempYear = stoi(tempDateTime.substr(1, 4));
			tempMonth = stoi(tempDateTime.substr(4, 2));
			tempDay = stoi(tempDateTime.substr(6, 2));
			tempHours = stoi(tempDateTime.substr(9, 2));
			tempMinutes = stoi(tempDateTime.substr(11, 2));
			tempSeconds = stoi(tempDateTime.substr(13, 2));

			tempMjd = tempVector[posMjd];
			tempDaily = tempVector[posDaily];
			tempSolarLongitude = tempVector[posSolarLongitude];

			dateTimeSolLong.push_back(cometData(tempDaily, tempSolarLongitude, tempDay, tempMonth, tempYear, tempSeconds, tempMinutes, tempHours, tempMjd));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}



}















