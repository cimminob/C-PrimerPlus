#pragma once
#include "stdafx.h"
#include "workermi.h"
#include <iostream> 

//queue tp 
template <typename T> 
class Queue 
{
private:
   enum {MAX = 10}; //max items in queue
   //T items[MAX]; //array of queue items
   struct Node {
      Node * next = nullptr;
      T item;
   };

   int number; //number of items in queue
   Node*  head;  //head of queue
   Node*  tail; //tail of queue
public:
   Queue(); //Ctor
   ~Queue();
   bool isEmpty(); //return true if no items in queue
   bool isFull(); //return true if MAX items in queue
   bool enqueue(const T & item);  //return true if successfully added item onto stack
   bool dequeue(const T & item);

};

template <class T>
Queue<T>::Queue() {
   number = 0;
   head = tail = nullptr;
}

template<typename T>
Queue<T>::~Queue()
{
   Node * temp;
   while (head !=NULL) {
      temp = head;
      head = head->next;
      delete temp;
   }
}

template<class T>
bool Queue<T>::isEmpty()
{
   //return true if top is equal to zero
   return number==0;
}
   
template<typename T>
bool Queue<T>::isFull() {
   
   //return true if top is equal to MAX
   return number==MAX;
}

//add item to end (tail of queue)
template<class T>
bool Queue<T>::enqueue(const T & item)
{
   //check first to see if queue is full
   if (number == MAX)
      return false;
   //queue is not full so proceed
   
   //create new node
   //next should be already initialized to nullptr or NULL from its ctor
   Node * newNode = new Node;
   //add data item to node
   newNode->item = item;
   newNode->next = NULL;

   //if queue is empty set both head and tail to newNode
   if (isEmpty()) {
      head = newNode;
   }
   //its not empty 
   else {
      tail->next = newNode;
   }
   tail = newNode;
   ++number;
   return true;
   
}

template<class T>
bool Queue<T>::dequeue(const T & item)
{
   if (isEmpty())
      return false;

   //save location of first item to delete it
   *item = *(head->item);
   Node * temp = head;
   //if queue is now empty, set tail to null
   --number;
   if (number == 0)
      head = NULL;
   else 
      head = head->next;
   delete temp;
   return true;
}
/////////////////////////////////////////////////////
////Node   Node   Node   Node   Node   Node   Node///
////head-------------------------------------tail////                 
////next-->next-->next-->next-->next-->next-->////
