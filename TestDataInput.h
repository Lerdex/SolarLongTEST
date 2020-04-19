#pragma once
#include "DataInput.h"
#include "iostream"

void testDataInput() {
	ucitavacPodatakaKometa("TestniPodatciCAMS.txt", 1, 0, 0, 57, 81, ';', false, true, 0, 0, 0, 0, 0, 0);
	ucitavacPodatakaKometa("TestniPodatciEDMOND.txt", 1, 2, 3, 4, 86, ',', true, false, 7, 5, 1, 10, 12, 14);
	ucitavacPodatakaKometa("TestniPodatciSONOTACO.txt", 1, 2, 3, 4, 105, ',', true, false, 7, 5, 1, 10, 12, 14);
	ucitavacPodatakaKometa("TestniPodatciGMN.txt", 2, 1, 0, 4, 81, ';', false, false, 9, 6, 1, 12, 15, 18); 
}


