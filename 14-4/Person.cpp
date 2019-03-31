#include "stdafx.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::cin;
using std::get;
using std::endl;

//default Ctor
Person::Person()
{
   first = "blank";
   last = "blank";
   character = "blank";
}

void Person::set()
{
   cout << "enter first name, press enter, then last name, press enter"<<endl;
   (cin >> first).get();
   (cin >> last).get();
}

void Person::show()
{
   cout << first << "  " << last<<" "<<character;
}

//Ctor
Gunslinger::Gunslinger() : Person() { character = "Gunslinger"; }

void Gunslinger::set() {
   Person::set();
   character = "Gunslinger";
   cout << "enter notches: ";
   cin >> notches;
   cin.get();
}

double Gunslinger::drawTime()
{

   return 9*(1/(double)notches);
}

void Gunslinger::show()
{
   Person::show();
   cout << "  notches: " << notches;
   cout << "  drawtime: " << drawTime();
}

//Ctor
PokerPlayer::PokerPlayer() : Person() {
   character = "Poker Player";
}

void PokerPlayer::set() {
   Person::set();
}

int PokerPlayer::Draw() {
   //return random number between 1 and 52
   return (rand() % 52) + 1;
}

void PokerPlayer::show() {
   Person::show();
   cout << "  Card: " << Draw();
}


BadDude::BadDude() : Gunslinger() {
   character = "Bad Dude";
}

void BadDude::set() {
   Gunslinger::set();
}

void BadDude::show() {
   Person::show();
   cout << "  Card drawn: " << Cdraw();
   cout << "  Draw time: " << Gdraw();
}

int BadDude::Cdraw()
{
   return Gunslinger::drawTime();
}

double BadDude::Gdraw()
{
   return Gunslinger::drawTime();
}
