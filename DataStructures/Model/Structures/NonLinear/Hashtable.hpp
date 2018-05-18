//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Amaya Penunuri, Yael on 5/7/18.
//  Copyright © 2018 Amaya Penunuri, Yael. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "../../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
    capacity = 101;
    internalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    return false;
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> * current, long index)
{
    long shift = 17;
    
    for (long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if (internalStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return this->size;
}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = getNextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for (long index = 0; index < oldCapacity; index++)
    {
        HashNode<Type> * temp = internalStorage[index];
        
        long position = finsPosition(temp);
        if (tempStorage[position] == nullptr)
        {
            tempStorage[position] == nullptr)
        }
        else
        {
            long updatedPosition = handleCollision(position);
            if (updatedPosition != -1)
            {
                tempStorage[updatedPosition] = temp;
            }
        }
    }
    internalStorage = tempStorage;
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this->size++;
    if(((this->size * 1.00) / this->capacity) > this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(internalStorage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
    else
    {
        long updeatedPosition = handleColision(index);
        if (updatedPosition != -1)
        {
            internal[updatedPosition]= temp;
        }
    }
}

#endif /* Hashtable_hpp */
