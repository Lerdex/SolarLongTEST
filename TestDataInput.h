#pragma once
#include "DataInput.h"
#include "iostream"
#include <cassert>
#include <stdio.h>

void testDataInput() {
	vector <cometData> testVector;
	testVector = ucitavacPodatakaKometa("TestniPodatciCAMS.txt", 1, 0, 0, 57, 81, ';', false, true, 0, 0, 0, 0, 0, 0);
	cout << "CAMS DIO UCITAVACA: \n \n";

	assert(testVector[0].day == 21, "Day ne radi normalno"); //CAMS testni dio	
	assert(testVector[0].month == 10, "Month ne radi normalno");
	assert(testVector[0].year == 2010, "Year ne radi normalno");
	assert(testVector[0].hours == 3, "Hours ne radi normalno" );
	assert(testVector[0].minutes == 23, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 42, "Seconds ne radi normalno");
	assert(testVector[0].Daily == 1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 207.4906, "Solar Longitude ne radi normalno");


	cout << "\n \n EDMOND DIO UCITAVACA: \n \n";				//EDMOND testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciEDMOND.txt", 1, 2, 3, 4, 86, ',', true, false, 7, 5, 1, 10, 12, 14);
	assert(testVector[0].day == 12, "Day ne radi normalno"); 
	assert(testVector[0].month == 8, "Month ne radi normalno");
	assert(testVector[0].year == 2001, "Year ne radi normalno");
	assert(testVector[0].hours == 21, "Hours ne radi normalno");
	assert(testVector[0].minutes == 13, "Minutes ne radi normalno");
	assert(testVector[0].seconds == 33, "Seconds ne radi normalno");
	assert(testVector[0].Daily == 1, "Daily ne radi normalno");
	assert(testVector[0].SolarLongitude == 140.196564, "Solar Longitude ne radi normalno");
	assert(testVector[0].mjd == 52133.884412, "Mjd Longitude ne radi normalno");
	
	
	cout << "\n \n SONOTACO DIO UCITAVACA: \n \n";				//SONOTACO testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciSONOTACO.txt", 1, 2, 3, 4, 105, ',', true, false, 7, 5, 1, 10, 12, 14);
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

	cout << "\n \n GMN DIO UCITAVACA: \n \n";				//GMN testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciGMN.txt", 2, 1, 0, 4, 81, ';', false, false, 9, 6, 1, 12, 15, 18);
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


