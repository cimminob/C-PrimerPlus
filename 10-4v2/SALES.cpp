#include "stdafx.h"
#include "SALES.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


/**************default constructor****************/
SALES::Sales::Sales() 
{
   double total = 0;
   double input;
   average_ = 1;
   max_ = 0;

   int i = 0;
   while (i < 4) {
      cout << "enter sales amount: " << endl;
      cin >> input;
      if (!cin) {
         cin.clear();
         //cout should clear the buffer
         //cin.ignore() //only if buffer not cleared
         cout << "bad input";
         continue;
      }
      //increment total
      total += input;
      //check for max
      if (max_ < input)
         max_ = input;
      if (i == 0)//assign first element to min
         min_ = input;
      else if (min_ > input)
         min_ = input;
      //fill s.sales array
      sales_[i] = input;
      ++i;
   }
   average_ = total / i;
}

SALES::Sales::Sales(double ar[], int n) 
{
   double total;
   memset(sales_, 0, sizeof(sales_));
   total = max_ = min_ = sales_[0] = ar[0];
   //check for out of bounds
   if (n > 4)
      n = 4;
   for (int i = 1; i < n; i++)
   {
      sales_[i] = ar[i];
      if (max_ < ar[i])
         max_ = ar[i];
      if (min_ > ar[i])
         min_ = ar[i];
      total += ar[i];
   }
   average_ = total / n;
}

void SALES::Sales::showSales()
{
   cout << endl << endl << "max: ";
   cout << max_ << endl << "min: " << min_;
   cout << endl << "average: " << average_ << endl;
   int size = sizeof(sales_) / sizeof(sales_[0]);
   for (int i = 0; i<size; i++)
      cout << endl << "quarterly sales: " << sales_[i];
   cout << endl << endl;
}
