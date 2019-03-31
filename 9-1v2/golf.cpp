#pragma once
#include "stdafx.h"
#include "golf.h"
#include <string>
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::getline;

void setgolf(golf & g, const char* name, int hc) {
   strcpy_s(g.fullname, name);
   //g.fullname = name;
   g.handicap = hc;
}

int setgolf(golf & g) {
  // cin.ignore();
   cout<<endl << "enter name: ";
   cin.getline(g.fullname, 40);
   cout << endl << "enter enter handicap: ";
   cin >> g.handicap;
   cin.ignore();
   if (g.fullname)
      return 1;
   else 
      return 0;
}

//resets handicap to new value
void rhandicap(golf & g, int hc) {
   g.handicap = hc;
   return;
}

//displays contents of golf structure
void showgolf(const golf & g) {
   cout << endl << "name: " << g.fullname;
   cout << endl << "handicap: " << g.handicap;
   return;
}