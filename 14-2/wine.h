#pragma once
#include "stdafx.h"
#include <string>
#include <valarray>
#include "Pair.h"
using std::string;
using std::valarray;
using std::ostream;
using std::istream;


typedef valarray <int> arrayInt;
//represents two int arrays


//inherit string and Pair base classes
typedef Pair <arrayInt, arrayInt> pairArray;


class wine : private string, private pairArray {


private:

    //number of vintage years
    const int m_years;

  public:

     //Ctor that takes two arrayInts
    // wine(string label, int years, arrayInt a, arrayInt b) : string(label), m_years(years), pairArray(a, b) {}
     wine(const char * label, int years, const int a[], const int b[]) ;
     
     //Ctor that takes label and years
     wine(const char * label, int years);
     
     //fills a pairArray
     void GetBottles();

     //display contents of the wine object
     void Show();

     const string & Label();

     int sum();


};