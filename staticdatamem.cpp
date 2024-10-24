#include <iostream>
using namespace std;


class Customer{
    string name;
    int account_number,balance;
    static int total_customer ;
    
    public:
    Customer(string name,int account_number,int balance ){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
    void display_total(){
        cout << total_customer << endl;
    }
    
};
int Customer::total_customer = 0;

int main() {
  
Customer A1("Rohit",1,10000);
Customer A2("Mohit",2,2000);
A2.display_total();
Customer A3("Mohan",3,2000);

A2.display_total();


}