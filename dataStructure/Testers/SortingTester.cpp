//
//  SortingTester.cpp
//  dataStructure
//
//  Created by Weber, Zane on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector<CrimeData> data, int low, int high)
{
    if (low < high)
    {
        int partitionPoint = partition(data, low, high);
        
        quickSort(data, low, partitionPoint - 1);
        quickSort(data, partitionPoint + 1, high);
    }
}

int SortingTester :: partition(vector<CrimeData> info, int low, int high)
{
    CrimeData pivotValue = info [high];
    int smallest = low - 1;
    
    for (int index = low; index < high - 1; index++)
    {
        if (info[index] < pivotValue)
        {
            smallest++;
            swap(info, smallest, index);
        }
}
    swap(info, smallest + 1,high);
    return smallest + 1;
}

void SortingTester :: swap(vector<CrimeData> info, int small, int large)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester :: testSorts()
{
    Timer sortTimer;
    vector<CrimeData> data = FileController::readCrimeDataToVector("/Users/zweb2753/Documents/Spring 2018 2420/ DataStructures/Data/crime.csv");
    
    sortTimer.startTimer();
    quickSort(data, 0, data.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
    cout << "The number of swaps were: " << swapCount << endl;
    
}
