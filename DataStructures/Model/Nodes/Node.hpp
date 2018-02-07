//
//  Node.hpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 2/7/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

template <class Type>
class Node
{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
}

template <class Type>
Node<Type> :: Node(Type data)
{
    
}

#endif /* Node_hpp */
