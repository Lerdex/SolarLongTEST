#pragma once
#include "CometClass.h"

vector<vector<string>> ucitavacPodatakaKometa(string fStreamName, char delimiter, int expectedColumnsCount) {
	ifstream dataInput(fStreamName);
	vector <string> tempVector;
	vector <string> vectorOfColumns;
	vector <vector<string>> vectorOfVectors;
	string tempData;
	int columnsCount = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData);
		vectorOfColumns.push_back(tempData);
	}

	for (int i = 0; i < vectorOfColumns.size(); i++) {
		stringstream oneColumn(vectorOfColumns[i]);

		while (oneColumn.good()) {
			getline(oneColumn, tempData, delimiter);
			tempVector.push_back(tempData);
		}

		vectorOfVectors.push_back(tempVector);
		tempVector.clear();
	}

	for (int i = 0; i < vectorOfVectors.size(); i++) {
		if (vectorOfVectors[i].size() <= expectedColumnsCount) vectorOfVectors.erase(vectorOfVectors.begin() + i);
	}

	return vectorOfVectors;
}

