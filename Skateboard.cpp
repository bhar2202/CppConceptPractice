#include "Skateboard.h"
#include <iostream>
#include <string>

using std::cout, std::endl;


SkateNode::SkateNode(int length) : length(length), nextPtr(nullptr){}

int SkateNode::getLength(){return length;}

SkateNode* SkateNode::getNext(){return nextPtr;}

void SkateNode::add(SkateNode* otherPtr){
    SkateNode* tempPtr = this->nextPtr;
    this->nextPtr = otherPtr;
    otherPtr->nextPtr = tempPtr;
}

SkateList::SkateList() : headPtr(nullptr){}



