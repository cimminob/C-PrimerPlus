#include "stdafx.h"
#include "golf.h"
#include <iostream>
using std::endl;
using std::cin;
using std::cout;

golf::golf()
{
   cout << endl << "enter new player name: ";
   cin >> fullname_;
   cout << endl << "enter player handicap: ";
   cin >> handicap_;
}
//constructor that takes name and handicap
golf::golf(char fullname[], int handicap)
{
   strcpy_s(fullname_, fullname);
   handicap_ = handicap;
}

void golf::setHandicap(int handicap)
{
   handicap_ = handicap;
}

void golf::display()
{
   cout << endl << "name: " << fullname_;
   cout << endl << "handicap: " << handicap_;
}



