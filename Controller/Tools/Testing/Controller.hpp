//
//  Controller.hpp
//  dataStructure
//
//  Created by Weber, Zane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp
#ifndef FileController_hpp
#define FileController_hpp
#endif /* FileControllerhpp */
#include <string>
#include <fstream>
#include <sstream>
#include "Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>
#include <vector>
#include "../Testers/RecursionTester.hpp"

class Controller
{
public:
    void start();
    static vector<CrimeData> readCrimeDataToVector(string filename);
    {
        std :: vector<rimeData> crimeVector;
        string currentCSVLine;
        int rowCount = 0;
        
        ifstream dataFile(filename);
        
        if (dataFile.is_open())
        {
            while (!dataFile.eof())
            {
                getline(dataFile, currentCSVLine, '\r');
                if (rowCount != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
                rowCount++;
            }
            dataFile.close();
        }
        else
        {
            cerr << "NO FILE" << endl;
        }
            
            return crimeVector;
};


#endif /* Controller_hpp */
