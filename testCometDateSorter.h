#pragma once
#include "CometDateSorter.h"
#include <cassert>
#include <vector>


void testCometDateSorter() {

    vector <numberOfCometsInADay> testVector;
    testVector = fNumberOfCometsInADay();

    assert(testVector[0].day == 21, "Day ne radi normalno");
    assert(testVector[0].month == 10, "Month ne radi normalno");
    assert(testVector[0].year == 2010, "Year ne radi normalno");
    assert(testVector[0].numberOfComets == 36, "NumberOfComets ne radi normalno");
    assert(testVector[1].day == 26, "Day ne radi normalno");
    assert(testVector[1].month == 10, "Month ne radi normalno");
    assert(testVector[1].year == 2010, "Year ne radi normalno");
    assert(testVector[1].numberOfComets == 19, "NumberOfComets ne radi normalno");
    assert(testVector[2].day == 3, "Day ne radi normalno");
    assert(testVector[2].month == 11, "Month ne radi normalno");
    assert(testVector[2].year == 2010, "Year ne radi normalno");
    assert(testVector[2].numberOfComets == 26, "NumberOfComets ne radi normalno");
}