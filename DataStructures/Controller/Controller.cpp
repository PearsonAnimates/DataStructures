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
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Look code on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 0; index < 50000; index++)
    {
        cout << "Index is " << index << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
