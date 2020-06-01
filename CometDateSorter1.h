#pragma once
#include "CometClass.h"
#include "DataInput.h"

struct SortingStruct
{
    int key;
    string stringValue;

    SortingStruct(int k, const std::string& s) : key(k), stringValue(s) {}

    bool operator > (const SortingStruct& str) const
    {
        return (key > str.key);
    }
};

vector <numberOfCometsInADay> NOCIADSorter(string fStreamName, char delimiter, int expectedColumnsCount, vector <cometData>(*cometDataPickerName)(string, char, int)) {
    vector <numberOfCometsInADay> NOCIADSortedVec = fNumberOfCometsInADay(fStreamName, delimiter, expectedColumnsCount, cometDataPickerName);
    sort(NOCIADSortedVec.begin(), NOCIADSortedVec.end(), greater<SortingStruct>());
    return NOCIADSortedVec;
}