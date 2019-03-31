#pragma once
#include <cstring>
/*

const int Len = 40;
struct golf {
char fullname[Len];
int handicap;
};

void setgolf(golf & g, const char* name, int hc);

int setgolf(golf & g);

void rhandicap(golf & g, int hc);

void showgolf(const golf & g
*/

class golf 
{
   public:
      golf();//default constructor
      //constructor that takes name and handicap
      golf(char fullname[], int handicap);
      void setHandicap(int handicap);
      void display();
      
   private:
      const static int Len = 40;
      char fullname_[Len];
      int handicap_;

};
