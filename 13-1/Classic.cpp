#pragma once
#include "stdafx.h"
#include "Classic.h"
#include <iostream>
using std::endl;
using std::cout;

Classic::Classic() :Cd() {
  // primary[0] = '\0';
};

Classic::Classic(const char * str,const char * s1,const char * s2,int n, double x) : Cd(s1, s2, n, x) {
   //primary[0] = '\0';
   strcpy_s(primary, strlen(str)+1, str);
}

void Classic::Report() const {
   cout << endl << "primary info: " << primary;
   Cd::Report();
}