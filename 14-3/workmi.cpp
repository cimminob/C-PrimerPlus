// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "workermi.h"
#include "QueueTp.h"
const int SIZE = 5;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;

   Queue<Worker*> workQ;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        Worker * wPtr;
        switch(choice)
        {
        case 'w': { //lolas[ct] = new Waiter;
                     wPtr = new Waiter;
                     wPtr->Set();

                     workQ.enqueue(wPtr);
                     //clear the memory
                     delete wPtr;
                     break; 
                    }
        case 's': {            //  lolas[ct] = new Singer;
                 wPtr = new Singer;
                 wPtr->Set();

                 workQ.enqueue(wPtr);
                 //clear the memory
                 delete wPtr;
                  break;
                 }
        case 't': {  //lolas[ct] = new SingingWaiter;
                  wPtr = new SingingWaiter;
                  wPtr->Set();

                  workQ.enqueue(wPtr);
                  //clear the memory
                  delete wPtr;
                  break;
                  }
        }
        cin.get();

    }

    cout << "\nHere is your staff:\n";
   

    while (!workQ.isEmpty()) {
       Worker* wPtr;
       workQ.dequeue(wPtr);
       wPtr->Show();
       delete wPtr;
    }

    cout << "Bye.\n";
     cin.get();
     cin.get();
    return 0; 
}
