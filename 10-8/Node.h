#pragma once
#include "stdafx.h"

class Node {
public:
   Node();
   Node(Item input);
   Item getData();
   void setNext(Node* next);
   void setPrev(Node* prev);
   Node* getNext();
   Node* getPrev();
   Node* makeNode(Item input);
private:
   Item item_;
   Node * Next_;
   Node * Prev_;
};
