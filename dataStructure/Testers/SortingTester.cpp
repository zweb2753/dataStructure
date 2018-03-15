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

in
