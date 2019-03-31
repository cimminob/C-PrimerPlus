#pragma once
#include "stdafx.h"

// base class
class Cd { // represents a CD disk
private:
   const static int pMAX = 50;
   const static int lMax = 20;
   char * performers;
   char * label;

   int selections; // number of selections
   double playtime; // playing time in minutes
public:
   Cd(const char * s1,const char * s2, int n, double x); 
   Cd(const Cd & d);
   Cd();
   virtual ~Cd(); //clear dynamic memory allocation
   virtual void Report() const; // reports all CD data
   Cd & operator=(const Cd & d);
};