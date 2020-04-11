#pragma once
#include "CometClass.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;



void ucitavacPodatakaKometa(std::string fStreamName, int posDaily, int posDate, int posTime, int posSolarLongitude, int maxPositions) {
	vector <cometData> dateTimeSolLong;
	ifstream dataInput(fStreamName);
	vector <std::string> tempVector;  
	std::string tempData, tempDaily, tempDate, tempTime, tempSolarLongitude;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, ';');
		if (counter == maxPositions) {

			tempDaily = tempVector[posDaily];
			tempDate = tempVector[posDate];
			tempTime = tempVector[posTime];
			tempSolarLongitude = tempVector[posSolarLongitude];

			dateTimeSolLong.push_back(cometData(tempDaily, tempDate, tempTime, tempSolarLongitude));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}
	

		
}
	










	



