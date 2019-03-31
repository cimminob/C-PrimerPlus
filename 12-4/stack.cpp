//compile with stack.h
#include "stdafx.h"
#include "stack.h"


//default constructor
Stack::Stack() {
   top = -1;
   size = 0;
   pitems = new Item[MAX]{};
}

//copy Ctor
Stack::Stack(Stack & item)
{
   top = item.top;
   size = item.size;
   pitems = new Item[MAX];
   for (int i = 0; i < MAX; i++)
      pitems[i] = item.pitems[i];
}
//test if stack is empty
bool Stack::isempty() const
{
  
   if (size == 0)
      return true;
   else
      return false;
}

//test if stack is full
bool Stack::isfull() const {
   //if top is equal to last element in array
   if (top == (MAX-1))
      return true;
   else
      return false;
}

//add item to stack
bool Stack::push(const Item & item)
{
  
   if (!isfull() ) {
      ++size;
      ++top;
      pitems[top] = item;
      return true;
   }
   else
      return false;
}

bool Stack::pop(Item & item) {
   if (!isempty()) {
      item = pitems[top];
      --size;
      --top;
      return true;
   }
   else
      return false;
}
