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
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData myData = FileController ::
        readCrimeDataToVector("/Users/zweb2753/Downloads/CrimeData.cpp")
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
