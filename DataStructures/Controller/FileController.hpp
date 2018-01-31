//
//  FileController.hpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 1/31/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

#include "../Data/CrimeData.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
};

#endif /* FileController_hpp */
