#pragma once
#include "stdafx.h"

template <typename Type1, typename Type2>
class Pair {
private:
   Type1 a;
   Type2 b;
public:
   //returns the values without changing them
   Type1 first() const {
      return a; }
   Type2 second() const {
      return b;
   }

   //allow assignment by returning a reference to a
   Type1 & first();

   //allow assignment by returning a reference to b
   Type2 & second();

   //default Ctor
   Pair() {}

   //Ctor that takes two const references
   Pair(const Type1 & aValue, const Type2 & bValue) : a(aValue), b(bValue) {}
};

template <typename Type1, typename Type2>
Type1 & Pair< Type1,  Type2>::first() {
   return a;
}

template <typename Type1, typename Type2>
Type2 &  Pair< Type1,  Type2>::second() {
   return b;
}
