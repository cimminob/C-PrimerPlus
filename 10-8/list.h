#pragma once
#include "stdafx.h"


class list
{
public:
   list();
   void AddToEnd(Node* addItem);
   Item Peek();
   void Remove();
   void Insert();

private:

   Node node_;
   Node* head_;
   Node* tail_;
   Node** item;
};