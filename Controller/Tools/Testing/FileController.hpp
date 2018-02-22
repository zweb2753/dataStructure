//
//  FileController.hpp
//  dataStructure
//
//  Created by Weber, Zane on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>

#endif /* FileController_hpp */

static LinkedList<CrimeData> readDataToList(string filename);
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crime.add(row);
                }
            }
        }   rowCount++;
    }
    dataFile.close();
}
else
{
    cerr << "NO FILE" << endl;
}

    return crimes;
}
