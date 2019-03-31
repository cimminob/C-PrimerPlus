#include "stdafx.h"
#include "list.h"


list::list() {
   Node node_;
   head_ = nullptr;
   tail_ = nullptr;
}

void list::AddToEnd(Node* addItem) 
{

   addItem->setPrev(head_);
   head_ = addItem;
   
}

Item list::Peek()
{
   return node_.Item;
}
