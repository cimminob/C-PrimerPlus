// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include "stdafx.h"
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
#include <fstream>
#include <cstring>

int main()
{
   using namespace std;
   using VECTOR::Vector;
   srand(time(0));     // seed random-number generator
   double direction;
   Vector step;
   Vector result(0.0, 0.0);
   unsigned long steps = 0;
   double target;
   double dstep;

   //open file to write to
   char filename[40];
   ofstream outfile;//ofstream object to write to
   cout << "enter a filename to write to: ";
   cin.getline(filename, 40);
   strcat_s(filename, ".txt");
   outfile.open(filename);
   if (!outfile.is_open()) {
      cout << endl << "unable to open file for writing";
      exit(EXIT_FAILURE);
   }

   cout << "Enter target distance (q to quit): ";
   while (cin >> target)
   {
      cout << "Enter step length: ";
      if (!(cin >> dstep))
         break;

      while (result.magval() < target)
      {
         direction = rand() % 360;
         step.reset(dstep, direction, Vector::POL);
         result = result + step;
         steps++;
      }
      outfile << "After " << steps << " steps, the subject "
         "has the following location:\n";
      outfile << result << endl;
      result.polar_mode();
      outfile << " or\n" << result << endl;
      outfile << "Average outward distance per step = "
         << result.magval() / steps << endl;
      steps = 0;
      result.reset(0.0, 0.0);
      cout << "Enter target distance (q to quit): ";
   }
   outfile.close();
   cout << "Bye!\n";

   cin.clear();
   while (cin.get() != '\n')
   continue;
   cin.get();
   
   return 0;
}
