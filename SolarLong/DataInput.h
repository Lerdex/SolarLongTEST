#pragma once
#include "CometClass.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;



void ucitavacPodatakaKometa(vector <CAMS_comet> dateTimeSolLong) {

	ifstream dataInput("Podatci.txt");
	vector <string> tempVector;  //stores first 83 values from the file stream then clears itself
	string tempData, tempDaily, tempDate, tempTime, tempSolarLongitude;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, ';');
		if (counter == 81) {

			tempDaily = tempVector[1];
			tempDate = tempVector[2];
			tempTime = tempVector[3];
			tempSolarLongitude = tempVector[57];

			dateTimeSolLong.push_back(CAMS_comet(tempDaily, tempDate, tempTime, tempSolarLongitude));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}
	

		
}
	










	



