#include "stdafx.h"
#include "Node.h"
#include "item.h"

Node::Node()
{
   //Node* item = new Node;

   Next_ = nullptr;
   Prev_ = nullptr;
}
Node::Node(Item input)
{
   item_ = input;
}

Item Node::getData()
{
   return item_;
}



Node * Node::getNext()
{
   return Next_;
}

Node * Node::getPrev()
{
   return Prev_;
}

void Node::setNext(Node *next)
{
   Next_ = next;
}

void Node::setPrev(Node * prev) 
{
   Prev_ = prev;
}

Node* Node::makeNode(Item input)
{
   Node * newNode = new Node(input);
   return newNode;
}
