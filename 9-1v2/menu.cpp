#pragma once
#include "stdafx.h"

#include <iostream>
#include "golf.h"

using std::cin;
using std::cout;
using std::endl;

char getchoice() {
   char choice;
   cout << endl << "enter e-enter d-display q-quit r-reset: "<<endl;
   cin.get(choice);
   cin.ignore();
   return choice;
}

void menu(golf gArray[])
{
   static int tally;
   static int numP;
   char input;
   while (true) {
      input = getchoice();
      switch (input) 
      {
         case 'q': {
            cout << endl << "terminating, press any key to quit";
            cin.get();
            exit(EXIT_SUCCESS);
         }
         case 'd': {
            cout << endl << "displaying players: ";
            for (int i = 0; i < tally; i++) {
               showgolf(gArray[i]);
               cout<<endl<<"record number is " << tally;
            }
            break;
         }
         case 'e': {
            if (setgolf(gArray[tally]))
               ++tally; //if successful input, increase tally
            break;
         }
         case 'r': 
         {
            int which = 0;
            int HC = 0;
            cout << endl << "enter number for player to reset";
            cin >> which;
            cout << "enter new handicap";
            cin >> HC;
            cin.ignore();
            rhandicap(gArray[which], HC);
            break;
         }
         default: {
            cout << endl << "enter q, r, d, or e only";
            break;
         }
      }
   }
   exit;
}
