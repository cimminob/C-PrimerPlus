#include "stdafx.h"
#include "Bank.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

string Bank::getName()
{
   return name_;
}

long Bank::getAcct()
{
   return account_;
}

float Bank::getBalance()
{
   return balance_;
}

void  Bank::setAccount(long account)
{
   account_ = account;
}
void  Bank::setName(string name) 
{
   name_ = name;
}

void Bank::withdrawal(float amt) 
{
   balance_ -= amt;
}
void Bank::deposit(float amt)
{
   balance_+= amt;
}

void Bank::newAccount() 
{
   cout << endl << "enter name: ";
   cin >> name_;
   cout << endl << "enter account provided by desk: ";
   cin >> account_;
   cout << endl << "enter deposit amount: ";
   cin >> balance_;
   cout << endl << "congrats, your account is set up";
   
}