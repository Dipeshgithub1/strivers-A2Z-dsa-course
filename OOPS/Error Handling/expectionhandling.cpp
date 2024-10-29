#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance,account_number;
    
    public:
     Customer(string name,int balance,int account_number){
         this->name = name;
         this->balance = balance;
         this->account_number = account_number;
     }
     //deposite
     void deposite(int amount){
     
     if(amount > 0){
         balance += amount;
         cout << amount << " credit  successfully\n";
     }
     else{
        throw "amount should be greater than";
     }
     };
     //withdraw
     void withdraw(int amount){
         if(amount > 0 && amount <= balance){
             balance -= amount;
             cout<< amount <<" is debit successfully";
         }
         else if(amount < 0){
            throw "amount shold be greater than 0";
         }
         else{
            throw "Your balance is low";
         }
     }
};

int main() {
   Customer C1("Rohit",5000,10);
   try
   {
   C1.deposite(100);
   C1.withdraw(5000);
   C1.withdraw(6000);
   }
   catch(const char *e){

  cout<<" Exception Occured : "<<e << endl;
   }

    return 0;
}