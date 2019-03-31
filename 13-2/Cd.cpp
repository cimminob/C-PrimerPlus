#include "stdafx.h"
#include "Cd.h"
#include <iostream>
using std::cout;
using std::endl;

//default constructor
Cd::Cd() {
   performers = new char[pMAX] {};
   label = new char[lMax] {};
   selections = 0;
   playtime = 0;
}
//copy constructor
Cd::Cd(const Cd & d) {
   performers = new char[pMAX] {};
   label = new char[lMax] {};
   strcpy_s(performers, pMAX, d.performers);
   strcpy_s(label, lMax, d.label);
   selections = d.selections;
   playtime = d.playtime;
}

//constructor that takes 4 arguments
Cd::Cd(const char * s1,const char * s2, int n, double x)//: performers {}, label{}
{
   performers = new char[pMAX] {};
   label = new char[lMax] {};
 //  strcpy(performers, s1);
 //  strcpy(label, s2);
   strcpy_s(performers, pMAX, s1);
   strcpy_s(label, lMax, s2);
   selections = n;
   playtime = x;
}

void Cd::Report() const {
   cout << endl << "performers: " << performers;
   cout << endl << "label: " << label;
   cout << endl << "selections: " << selections;
   cout << endl << "playtime: " << playtime;
}

//overloaded assignment operator
Cd & Cd::operator=(const Cd & d) {
   cout << endl << "................" << endl <<
      "in Cd operator overload";
   if (this == &d)
      return *this;
   delete[] performers;
   delete[] label;
   strcpy_s(performers,pMAX, d.performers);
   strcpy_s(label, lMax, d.label);
   selections = d.selections;
   playtime = d.playtime;
   return *this;
}

//Dtor
Cd::~Cd()
{
   delete[] performers, label;
}