#pragma once
#include "CometClass.h"

vector<vector<string>> ucitavacPodatakaKometa(string fStreamName, char delimiter, int expectedColumnsCount) {
	ifstream dataInput(fStreamName);
	vector <string> tempVector;
	vector <vector<string>> vectorOfVectors;
	string tempData;
	int columnsCount = 0;

	while (dataInput.good()) {
		
			getline(dataInput, tempData, delimiter);
			tempVector.push_back(tempData);
			columnsCount++;

		if (columnsCount <= expectedColumnsCount) continue;
		
		vectorOfVectors.push_back(tempVector);
		tempVector.clear();
		columnsCount = 0;
	}

	return vectorOfVectors;
}

