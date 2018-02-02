//
//  Controller.cpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 1/31/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    findMaxAndMin();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/yama6920/CTEC Data Project Thingys/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData[index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The biggest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
