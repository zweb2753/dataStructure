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
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    
    
}
