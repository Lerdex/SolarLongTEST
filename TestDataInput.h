#pragma once
#include "DataInput.h"
#include "iostream"
#include <cassert>
void testDataInput() {
	vector <cometData> testVector;
	testVector = ucitavacPodatakaKometa("TestniPodatciCAMS.txt", 1, 0, 0, 57, 81, ';', false, true, 0, 0, 0, 0, 0, 0);
	cout << "CAMS DIO UCITAVACA: \n \n";

	assert(testVector[0].day != 21); //CAMS testni dio
	cout << "Day ne radi normalno" << endl;
	assert(testVector[0].month != 10);
    cout << "Month ne radi normalno" << endl;
	assert(testVector[0].year != 2010);
	cout << "Year ne radi normalno" << endl;
	assert(testVector[0].hours != 3);
	cout << "Hours ne radi normalno" << endl;
	assert(testVector[0].minutes != 23);
	cout << "Minutes ne radi normalno" << endl;
	assert(testVector[0].seconds != 42);
	cout << "Seconds ne radi normalno" << endl;
	assert(testVector[0].Daily != 1);
	cout << "Daily ne radi normalno" << endl;
	assert(testVector[0].SolarLongitude != 207.4906);
	cout << "Solar Longitude ne radi normalno" << endl;


	cout << "\n \n EDMOND DIO UCITAVACA: \n \n";				//EDMOND testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciEDMOND.txt", 1, 2, 3, 4, 86, ',', true, false, 7, 5, 1, 10, 12, 14);

	assert(testVector[0].day != 12); 
	cout << "Day ne radi normalno" << endl;
	assert(testVector[0].month != 8);
	cout << "Month ne radi normalno" << endl;
	assert(testVector[0].year != 2001);
	cout << "Year ne radi normalno" << endl;
	assert(testVector[0].hours != 21);
	cout << "Hours ne radi normalno" << endl;
	assert(testVector[0].minutes != 13);
	cout << "Minutes ne radi normalno" << endl;
	assert(testVector[0].seconds != 33);
	cout << "Seconds ne radi normalno" << endl;
	assert(testVector[0].Daily != 1);
	cout << "Daily ne radi normalno" << endl;
	assert(testVector[0].SolarLongitude != 140.196564);
	cout << "Solar Longitude ne radi normalno" << endl;
	assert(testVector[0].mjd != 52133.884412);
	cout << "Mjd Longitude ne radi normalno" << endl;


	cout << "\n \n SONOTACO DIO UCITAVACA: \n \n";				//SONOTACO testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciSONOTACO.txt", 1, 2, 3, 4, 105, ',', true, false, 7, 5, 1, 10, 12, 14);

	assert(testVector[0].day != 3);
	cout << "Day ne radi normalno" << endl;
	assert(testVector[0].month != 1);
	cout << "Month ne radi normalno" << endl;
	assert(testVector[0].year != 2007);
	cout << "Year ne radi normalno" << endl;
	assert(testVector[0].hours != 23);
	cout << "Hours ne radi normalno" << endl;
	assert(testVector[0].minutes != 34);
	cout << "Minutes ne radi normalno" << endl;
	assert(testVector[0].seconds != 6);
	cout << "Seconds ne radi normalno" << endl;
	assert(testVector[0].Daily != 1);
	cout << "Daily ne radi normalno" << endl;
	assert(testVector[0].SolarLongitude != 282.737305);
	cout << "Solar Longitude ne radi normalno" << endl;
	assert(testVector[0].mjd != 54103.607014);
	cout << "Mjd Longitude ne radi normalno" << endl;


	cout << "\n \n GMN DIO UCITAVACA: \n \n";				//GMN testni dio

	testVector = ucitavacPodatakaKometa("TestniPodatciGMN.txt", 2, 1, 0, 4, 81, ';', false, false, 9, 6, 1, 12, 15, 18);
	assert(testVector[0].day != 10); 
	cout << "Day ne radi normalno" << endl;
	assert(testVector[0].month != 12);
	cout << "Month ne radi normalno" << endl;
	assert(testVector[0].year != 2018);
	cout << "Year ne radi normalno" << endl;
	assert(testVector[0].hours != 0);
	cout << "Hours ne radi normalno" << endl;
	assert(testVector[0].minutes != 43);
	cout << "Minutes ne radi normalno" << endl;
	assert(testVector[0].seconds != 59);
	cout << "Seconds ne radi normalno" << endl;
	assert(testVector[0].Daily != -1);
	cout << "Daily ne radi normalno" << endl;
	assert(testVector[0].SolarLongitude != 257.637329);
	cout << "Solar Longitude ne radi normalno" << endl;
	


}


