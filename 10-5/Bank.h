
#include <string>
using std::string;

class Bank 
{
private: 
   string name_;
   long account_;
   float balance_;

public: 
   Bank() {
      name_ = "blank";
      account_ = 0000000;
      balance_ = 0;
   }
   string getName();
   long   getAcct();
   float  getBalance();

   void   setAccount(long account);
   void   setName(string name);
   void   withdrawal(float amt);
   void   deposit(float amt);

   void   newAccount();
};    