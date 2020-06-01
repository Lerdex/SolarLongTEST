#pragma once
#include "DataOutput.h"


void dataOutputForAllDatabases(string CAMSFileName, string EDMONDFileName, string SONOTACOFileName, string GMNFileName) {
	dataOutput(NOCIADSorter(CAMSFileName, ';', 81, cometDataPickerCAMS), "CAMSFILE.csv");
	dataOutput(NOCIADSorter(EDMONDFileName, ',', 86, cometDataPickerEDMONDiSONOTACO), "EDMONDFILE.csv");
	dataOutput(NOCIADSorter(SONOTACOFileName, ',', 105, cometDataPickerEDMONDiSONOTACO), "SONOTACOFILE.csv");
	dataOutput(NOCIADSorter(GMNFileName, ';', 81, cometDataPickerGMN), "GMNFILE.csv");
	
}
