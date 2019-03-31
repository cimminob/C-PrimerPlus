#pragma once
#include "stdafx.h"
#include "Classic.h"
#include <iostream>
using std::endl;
using std::cout;

Classic::Classic() :Cd() {
   primary = new char[prMAX] {};
};

Classic::Classic(const char * str,const char * s1,const char * s2,int n, double x) : Cd(s1, s2, n, x) {
   primary = new char[prMAX] {};
   strcpy_s(primary, prMAX, str);
}

//overload assignment
Classic & Classic::operator=(const Classic & c) {
   cout << endl << "................" << endl <<
      "in classic operator overload";
   //call base class assignment operator;
   Cd::operator=(c);
   //check for self assignment
   if (this == &c)
      return *this;
   else
      delete[] primary;
   strcpy_s(primary, prMAX, c.primary);
   

   return *this;

}

Classic::~Classic() {
   delete[] primary;
}
void Classic::Report() const {
   cout << endl << "primary info: " << primary;
   Cd::Report();
}
