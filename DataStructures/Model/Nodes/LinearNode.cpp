//
//  LinearNode.cpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 2/8/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    //Constructores
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

//Constructors

/**
 This constructor is used for building the raw structore before the values are known.
 */

template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}

/**
 This constructor is used to create a reference to a instance with data.
 */

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

/**
 This constructor is used to create a reference to a instance with data and a known link.
 */

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}
