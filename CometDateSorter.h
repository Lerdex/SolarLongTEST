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

		printf("%d %d %d        %d\n\n", day, month, year, numberOfComets);
	}
};

vector <numberOfCometsInADay> fNumberOfCometsInADay() {
	vector <numberOfCometsInADay> vecNumberOfCometsInADay;
	vector <cometData> vecCometData;
	int counter = 0;
	//***treba promijeniti da radi sa svim bazama podataka***
	vecCometData = cometDataPickerCAMS("PraviPodatciManjeMemorije.txt", ';', 81);

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