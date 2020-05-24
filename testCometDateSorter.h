#pragma once
#include "CometDateSorter.h"
#include <cassert>
#include <vector>


void testCometDateSorter() {

    vector <numberOfCometsInADay> testVector;
    testVector = fNumberOfCometsInADay("TestniPodatciCometDateSorter.txt", ';', 81, cometDataPickerCAMS);
    
    assert(testVector[0].day == 21, "Day ne radi normalno");
    assert(testVector[0].month == 10, "Month ne radi normalno");
    assert(testVector[0].year == 2010, "Year ne radi normalno");
   assert(testVector[0].numberOfComets == 81, "NumberOfComets ne radi normalno");
    assert(testVector[1].day == 26, "Day ne radi normalno");
    assert(testVector[1].month == 10, "Month ne radi normalno");
    assert(testVector[1].year == 2010, "Year ne radi normalno");
   assert(testVector[1].numberOfComets == 70, "NumberOfComets ne radi normalno");
   
    
}