#include "stdafx.h"
#include "Cd.h"
using std::cout;
using std::endl;

//default constructor
Cd::Cd() {
   //performers[0] = '\0'; //clear the string
   //label[0] = '\0';
   selections = 0;
   playtime = 0;
}
//copy constructor
Cd::Cd(const Cd & d) {
   //performers[0] = '\0'; //clear the string
   //label[0] = '\0';
   strcpy_s(performers, strlen(performers)+1, d.performers);
   strcpy_s(label, strlen(label)+1, d.label);
   selections = d.selections;
   playtime = d.playtime;
}

//constructor that takes 4 arguments
Cd::Cd(const char * s1,const char * s2, int n, double x)//: performers {}, label{}
{

   strcpy(performers, s1);
    strcpy(label, s2);
//   strcpy_s(performers, strlen(performers)+1, s1);
//   strcpy_s(label, strlen(label)+1, s2);
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
   if (this == &d)
      return *this;
   strcpy_s(performers, strlen(performers)+1, d.performers);
   strcpy_s(label, strlen(label)+1, d.label);
   return *this;
}

