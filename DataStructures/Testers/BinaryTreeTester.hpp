//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 3/27/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Structures/BinarySearchTree.hpp"
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
