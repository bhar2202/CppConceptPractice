#ifndef _SKATEBOARD_H
#define _SKATEBOARD_H

#include <string>
#include <iostream>

class SkateNode{
    public:
        int getLength();
        SkateNode* getNext();
        void add(SkateNode* otherPtr);
        SkateNode(int length);
    private:
        int length;
        SkateNode* nextPtr;

};

class SkateList{
    public:
        SkateList();
        void add(int length);
        void printList();
    private:
        SkateNode* headPtr;
};



#endif