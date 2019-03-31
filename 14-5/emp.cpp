#include "stdafx.h"
#include "emp.h"
using std::cout;
using std::cin;


abstr_emp::abstr_emp()
{
   fname = "blank";
   lname = "blank";
   job = "blank";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
   const std::string & j) {
   fname = fn;
   lname = ln;
   job = j;
}

void abstr_emp::SetAll()
{
   cout << "enter first name: ";
   cin >> fname;
   cout << "enter last name: ";
   cin >> lname;
   cout << "enter job";
   cin >> job;
}

void abstr_emp::ShowAll() const {
   cout << "first name: " << fname;
   cout << "last name: " << lname;
   cout << "job: "<<jo;

}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e) {
   os << "first name: " << e.fname;
   os << "last name: " << e.lname;
   os << "job: " << e.job;
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string & fn, const std::string & ln, 
   const std::string & j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
   abstr_emp::ShowAll();
}

void employee::SetAll()
{
   abstr_emp::SetAll();
}

manager::manager() : abstr_emp()
{
   inchargeof = 0;
}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{}

manager::manager(const manager & m)
{

}
