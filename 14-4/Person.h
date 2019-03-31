#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using std::string;


class Person {
private:
   string first;
   string last;

public:
   virtual void set();//
   Person();//Ctor
   string character;
   virtual void show();

   //pure virtual destructor
   virtual ~Person() = 0 {};
};


/*
A Gunslinger class
derives virtually from the Person class. It has a Draw() member that returns a type
double value representing a gunslinger’s draw time.The class also has an int member
representing the number of notches on a gunslinger’s gun. Finally, it has a
Show() function that displays all this information.
*/

class Gunslinger : virtual public Person {
private:
   int notches;

public:
   Gunslinger();
   void set();
   double drawTime();
   void show();

};

/*
A PokerPlayer class derives virtually from the Person class. It has a Draw() member
that returns a random number in the range 1 through 52, representing a card
value. (Optionally, you could define a Card class with suit and face value members
and use a Card return value for Draw().) The PokerPlayer class uses the Person
show() function.
*/

class PokerPlayer : virtual public Person {
private:
public:
   int Draw();
   void set();
   PokerPlayer();
   void show();
};


/*
The BadDude class derives publicly from the Gunslinger and
PokerPlayer classes. It has a Gdraw() member that returns a bad dude’s draw time
and a Cdraw() member that returns the next card drawn. It has an appropriate
Show() function. Define all these classes and methods, along with any other necessary
methods (such as methods for setting object values) and test them in a simple
program similar to that in Listing 14.12.
*/

class BadDude : public Gunslinger, public PokerPlayer {
private:
public:
   BadDude();
   void set();
   void show();
   int Cdraw();
   double Gdraw();

}; 