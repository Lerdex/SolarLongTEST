#pragma once
#include "CometDataPicker.h"
#include <cassert>
#include <stdio.h>

void testDataInput() {
	vector <cometData> testVector;

			//CAMS testni dio
	testVector = cometDataPickerCAMS("TestniPodatciCAMSWithoutLine.txt", ';', 81);
	assert(testVector.size() == 2, "Remover nepotpunih linija ne radi");  

	testVector = cometDataPickerCAMS("TestniPodatciCAMS.txt", ';', 81);
	assert(testVector[0].day == 21, "Day ne radi normalno"); 	
	assert(testVector[0].month == 10, "Month ne radi normalno");
	assert(testVector[0].year == 2010, "Year ne radi normalno");
	assert(testVector[0].hours == 3, "Hours ne radi normalno" );
	assert(testVector[0].minutes == 23, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 42, "Seconds ne radi normalno");
	assert(testVector[0].Daily == 1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 207.4906, "Solar Longitude ne radi normalno");


			//EDMOND testni dio

	testVector = cometDataPickerEDMONDiSONOTACO("TestniPodatciEDMOND.txt", ',', 86);
	assert(testVector[0].day == 12, "Day ne radi normalno"); 
	assert(testVector[0].month == 8, "Month ne radi normalno");
	assert(testVector[0].year == 2001, "Year ne radi normalno");
	assert(testVector[0].hours == 21, "Hours ne radi normalno");
	assert(testVector[0].minutes == 13, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 33, "Seconds ne radi normalno");
	assert(testVector[0].Daily == 1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 140.196564, "Solar Longitude ne radi normalno");
	assert(testVector[0].mjd == 52133.884412, "Mjd Longitude ne radi normalno");
	
	
			//SONOTACO testni dio

	testVector = cometDataPickerEDMONDiSONOTACO("TestniPodatciSONOTACO.txt", ',', 105);
	assert(testVector[0].day == 3, "Day ne radi normalno");
	assert(testVector[0].month == 1, "Month ne radi normalno");
	assert(testVector[0].year == 2007, "Year ne radi normalno");
	assert(testVector[0].hours == 23, "Hours ne radi normalno");
	assert(testVector[0].minutes == 34, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 6, "Seconds ne radi normalno");
	assert(testVector[0].Daily == 1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 282.737305, "Solar Longitude ne radi normalno");
	assert(testVector[0].mjd == 54103.607014, "Mjd Longitude ne radi normalno");
	assert(testVector[0].day == 3);

			//GMN testni dio

	testVector = cometDataPickerGMN("TestniPodatciGMN.txt", ';', 81);
	assert(testVector[0].day == 10, "Day ne radi normalno"); 
	assert(testVector[0].month == 12, "Month ne radi normalno");
	assert(testVector[0].year == 2018, "Year ne radi normalno");
	assert(testVector[0].hours == 0, "Hours ne radi normalno");
	assert(testVector[0].minutes == 43, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 59, "Seconds ne radi normalno");
	assert(testVector[0].Daily == -1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 257.637329, "Solar Longitude ne radi normalno");
	assert(testVector[0].day == 10); 
	


}


