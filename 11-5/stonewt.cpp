// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
using std::ostream;
#include "stonewt.h"

Stonewt::state Stonewt::getForm() const
{
   return theform;
}



void Stonewt::setForm(state form)
{
   theform = form;
}

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}


ostream & operator<<(std::ostream & output,const Stonewt wt)
{
   Stonewt::state form;
   form=wt.getForm();
   //Stonewt::state form = wt.getForm;
   if (form == Stonewt::stones)
      wt.show_stn;
   else if (form == Stonewt::int_lbs)
      wt.show_lbs;
   return output;
}