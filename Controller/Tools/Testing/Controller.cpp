//
//  Controller.cpp
//  dataStructure
//
//  Created by Weber, Zane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"

using namespace std;

void Controller :: start()
{
    SortingTester my;
    my.testSorts();
}

void Controller :: testStacksAndQueues()
{
    TestStacksAndQueues myTest;
    myTest.queueVersusList();
    myTest.stackVersusQueue();
    myTest.stackVersusList();
}
void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData =
}
