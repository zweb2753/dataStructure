//
//  SortingTester.hpp
//  dataStructure
//
//  Created by Weber, Zane on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <stdio.h>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large );
public:
    void testSorts();
};








#endif /* SortingTester_hpp */
