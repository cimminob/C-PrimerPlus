#include "stdafx.h"
#include "Pair.h"
#include "wine.h"

using std::cout;
using std::cin;
using std::endl;

/*
int Wine::GetBottles(Wine vintage_years, int y) {

}
*/

//constructors
// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine::Wine(const char * l, int y, const int yr[], const int bot[]) {
   label = l;
   years = y;
   ArrayInt vintageYear(y);
   ArrayInt numBottles(y);
   vintage.first() = vintageYear;
   vintage.second() = numBottles;
   for (int i = 0; i < years; i++) {
      vintage.first()[i] = yr[i];
      vintage.second()[i] = bot[i];
   }
}


// initialize label to l, number of years to y,g
// create array objects of length y
Wine::Wine(const char * l, int y) {
   label = l;
   years = y;
   ArrayInt vintageYear(y);
   ArrayInt numBottles(y);
   vintage.first() = vintageYear;
   vintage.second() = numBottles;

}

//gets the number of Vintage years and bottle counts
void Wine::GetBottles() {
   int yearV=0;
   int numV = 0;
   for (int i = 0; i < years; i++) {
      cout << "enter the vintage year: ";
       cin >> yearV;
         vintage.first()[i]=yearV;
      cout << "enter the number of bottles for that vintage year: ";
         cin >> numV;
      vintage.second()[i] = numV;
   }
}

//return sum of all the bottle counts
int Wine::sum() {
   //call sum from valarray
   return vintage.second().sum();
}

//display all contents
void Wine::Show() {
   for (int i = 0; i < years; i++) {
      cout << "vintage year: " << vintage.first()[i] << " " << vintage.second()[i]<<endl;
   }
}