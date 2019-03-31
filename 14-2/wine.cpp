#include "stdafx.h"
#include "wine.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Ctor that takes two arrayInts
// wine(string label, int years, arrayInt a, arrayInt b) : string(label), m_years(years), pairArray(a, b) {}
wine::wine(const char * label, int years, const int a[], const int b[]) : string(label), m_years(years) {
   arrayInt a1(years);
   arrayInt b1(years);
   for (int i = 0; i < years; i++) {
      a1[i] = a[i];
      b1[i] = b[i];
   }
   first() = a1;
   second() = b1;
}

//Ctor that takes label and years
wine::wine(const char * label, int years) : string(label), m_years(years) {
   arrayInt vintageYear(years);
   arrayInt numBottles(years);
   first() = vintageYear;
   second() = numBottles;
}


void wine::GetBottles()
{
   //initialize arrayInt with number of elements set to number of vintage years
   int a = 0;
   int b = 0;
   for (int i = 0; i < m_years; i++) {
      cout << "enter year: ";
      cin >> a;
      first()[i] = a;
      cout << "enter the number of bottles: ";
      cin >> b;
      second()[i] = b;
   }
}

void wine::Show()
{

   for (int i = 0; i < m_years; i++) {
      cout << "vintage year: " << first()[i] << " " << second()[i] << endl;
   }
}
   
const string & wine::Label()
{
   return (const string &) *this;   
}

int wine::sum()
{
   //access base class public member
   return second().sum();
}
