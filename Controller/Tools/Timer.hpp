//
//  Timer.hpp
//  dataStructure
//
//  Created by Weber, Zane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#ifndef Controller_hpp
#define Controller_hpp
#include <time.h>
#include <assert.h>
#include <iostream>
#include <stdio.h>
#include "Tools/Timer.hpp"

#endif /* Timer_hpp */

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
    
};

