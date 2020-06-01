#pragma once
#include "CometDateSorter.h"

void dataOutput(vector <numberOfCometsInADay> readyForFileOutput, string fileOutputName) {
	ofstream outputDataToFile;
	outputDataToFile.open(fileOutputName);
	
	for (numberOfCometsInADay tempOutputData : readyForFileOutput) {
		outputDataToFile << tempOutputData.day << '.' << tempOutputData.month << '.' << tempOutputData.year << '.' << ", " << tempOutputData.numberOfComets << endl;
	}


}