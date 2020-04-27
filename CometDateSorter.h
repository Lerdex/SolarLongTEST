#pragma once
#include "CometClass.h"
#include "DataInput.h"

//Shows the number of comets spotted on a given day

class numberOfCometsInADay {
public:
	int numberOfComets;
	int day;
	int month;
	int year;

	numberOfCometsInADay(int aDay, int aMonth, int aYear) {
		day = aDay;
		month = aMonth;
		year = aYear;
		numberOfComets = 1;
	}
};

vector <numberOfCometsInADay> fNumberOfCometsInADay() {
	vector <numberOfCometsInADay> vecNumberOfCometsInADay;
	vector <cometData> vecCometData;
	int counter = 0;
	//***treba promijeniti da radi sa svim bazama podataka***
	vecCometData = ucitavacPodatakaKometa("PraviPodatci.txt", 1, 0, 0, 57, 81, ';', false, true, 0, 0, 0, 0, 0, 0);		

	vecNumberOfCometsInADay.push_back(numberOfCometsInADay(0, 0, 0));	//samo kako bi se popunilo prvo mjesto jer inace javlja errore

	for (int i = 0; i < vecCometData.size(); i++) {
		
		if (vecNumberOfCometsInADay[counter].day == vecCometData[i].day && vecNumberOfCometsInADay[counter].month == vecCometData[i].month  && vecNumberOfCometsInADay[counter].year == vecCometData[i].year) {
			
			vecNumberOfCometsInADay[counter].numberOfComets++;			

		}
		else {

			vecNumberOfCometsInADay.push_back(numberOfCometsInADay(vecCometData[i].day, vecCometData[i].month, vecCometData[i].year));
			counter++;

		}
	}
	vecNumberOfCometsInADay.erase(vecNumberOfCometsInADay.begin());
	return vecNumberOfCometsInADay;
}