#pragma once
namespace SALES
{
   class Sales
   {
   public:

      //*******************Constructor***************************//
      // gathers sales for 4 quarters interactively, stores them
      // in the sales member of s and computes and stores the
      // average, maximum, and minimum values
      //**********************************************************//
      Sales();

      //**********************Constructor*************************//
      // copies the lesser of 4 or n items from the array ar[]
      // to the sales member and computes and stores the
      // average, maximum, and minimum values of the entered items;
      // remaining elements of sales, if any, set to 0
      //**********************************************************//
      Sales(double ar[], int n);

      // display all information in the object
      void showSales();

   private:
      static const int QUARTERS = 4;
      double sales_[QUARTERS];
      double average_;
      double max_;
      double min_;

   };
}